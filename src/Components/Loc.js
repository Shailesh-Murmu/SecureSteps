import React, { useEffect, useState, useMemo } from 'react';
import { io } from 'socket.io-client';
import { useAuth } from '../context/authcontext';

export default function Loc() {
  const socket = useMemo(() => io("http://localhost:1890"), []); // Socket connection initialized
  const [latitude, setLatitude] = useState(0); // State for latitude
  const [longitude, setLongitude] = useState(0); // State for longitude
  const { user } = useAuth(); // Get the authenticated user from context

  // Extract the user's phone number safely
  const userPhone = user?.username?.phone;
  console.log("User's phone:", userPhone);

  useEffect(() => {
    let geoWatchId;
    
    if (navigator.geolocation) {
      // Watch the user's position in real-time
      geoWatchId = navigator.geolocation.watchPosition(
        (position) => {
          const { longitude, latitude } = position.coords;
          console.log("Location received:", latitude, longitude);
          setLatitude(latitude);
          setLongitude(longitude);

          if (userPhone) {
            // Send the location to the server
            socket.emit("send-location", { latitude, longitude, roomname: userPhone });
          }
        },
        (error) => {
          console.error("Geolocation error:", error);
        },
        {
          enableHighAccuracy: true,
        }
      );
    }

    // Clean up the geolocation watcher and socket connection when the component unmounts
    return () => {
      if (geoWatchId) {
        navigator.geolocation.clearWatch(geoWatchId); // Clear geolocation watcher
      }
      socket.disconnect(); // Disconnect the socket
    };
  }, [socket, userPhone]); // Dependencies: socket and userPhone

  // Function to handle location sharing (joins the user to a room)
  const setLocation = () => {
    console.log("Sharing location for user:", userPhone);
    if (userPhone) {
      socket.emit("join-room", { room: userPhone });
      console.log("Joined room:", userPhone);
    } else {
      console.log("User phone number not available");
    }
  };

  useEffect(() => {
    // Handle socket connection event
    socket.on("connect", () => {
      console.log("Connected to socket:", socket.id);
    });

    return () => {
      // Clean up the socket event listener on component unmount
      socket.off("connect");
    };
  }, [socket]);

  return (
    <div>
      <div className="body">
        <div className="nav1">
          <div className="logo3"></div>
        </div>
        <div className="section1">
          <div className="aside1">
            Protecting what matters the most <br /> your family's safety, anytime, anywhere.
            <div className="font1">Your location will be shared with your family</div>
            <button className="btn4 btn3" onClick={setLocation}>Share Location</button>
          </div>
        </div>
      </div>
    </div>
  );
}
