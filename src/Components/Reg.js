import React from 'react'
import { Link } from 'react-router-dom';
import videoFile from './vid1.mp4';

function VideoPlayer() {
  return (
    <video width="600" loop autoPlay muted>
      <source src={videoFile} type="video/mp4" />
    </video>
  );
}

export default function Reg() {
  return (
    <div>
    <div className="header">
        <div className='aside'>
            <div className="container1" >
              {VideoPlayer()}
            </div>
        </div>
        <div className="section img1">   
            <div className="container2">
                <div className="heading">Register</div>
                <form action="/action_page.php" className="form"/>
                    <div className="form1">
                        <div className="val1">Name</div>
                        <div className="val2">Phone</div>
                    </div>
                    <div className="form2">
                        <input className="age" type="text" id="fname" name="fname" />
                        <input className="age2 age" type="number" id="phone" name="phone" /><br/><br/>
                    </div>
                    Age <br/>
                    <input className="age1 age" type="number" id="age" name="age" /><br/><br/>
                <div className="em">
                    <input type="checkbox" className="tick"/>
                    <div className="tor">I agree with Stayfree Terms of Service, Privacy and <br/> Policy and default Notification Setting</div>
                </div>
                <Link className= "formsub" to='/Details'>Create Account</Link>
            </div>
          </div>
        </div>
    </div>
  )
}
