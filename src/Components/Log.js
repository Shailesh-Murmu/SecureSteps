import React from "react";
import { Link } from 'react-router-dom';
import videoFile from './vid1.mp4';

function VideoPlayer() {
    return (
      <video width="600" loop autoPlay muted>
        <source src={videoFile} type="video/mp4" />
      </video>
    );
  }

export default function Log() {
  return (
    <div >
      <div className="header">
        <div className="aside">
          <div className="container1">{VideoPlayer()}</div>
        </div>
        <div className="section img1">
          <div className="container3">
            <div className="heading">Log in</div>
            <form action="/action_page.php" className="form" />
            <div className="form1 form3">
              <div className="val1  mar">Name</div>
              <input className="age mar wid" type="text" id="fname" name="fname" />
              <div className="val3 mar">Phone</div>
              <input
                className="age mar mar1 wid"
                type="number"
                id="phone"
                name="phone"
              />
            </div>
            <Link className="formsub1" to="/Share Location">
              Submit
            </Link>
          </div>
        </div>
      </div>
    </div>
  );
}
