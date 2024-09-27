import React from 'react'
import videoFile from './vid1.mp4';
import { Link } from 'react-router-dom';
function VideoPlayer() {
    return (
      <video width="600" loop autoPlay muted>
        <source src={videoFile} type="video/mp4" />
      </video>
    );
}


export default function Detail() {
  return (
    <div>
      <div class="header">
        <div>
            <div class="container1" >
            {VideoPlayer()}
            </div>
        </div>
        <div class="sextion">   
            <div class="cunt2 ">
                <div class="heading">User Details</div>
                <form action="/action_page.php" class="form">
                    <div class="form1">
                        <div class="val1">Name</div>
                        <div class="val2 a2">Phone</div>
                    </div>
                    <div class="form2">
                        <input class="age" type="text" id="fname" name="fname" />
                        <input class="age2 age" type="number" id="phone" name="phone" /><br/><br/>
                    </div>
                    <div class="form1">
                        <div class="val1">Father's Name</div>
                        <div class="val2">Phone</div>
                    </div>
                    <div class="form2">
                        <input class="age" type="text" id="fname" name="fname" />
                        <input class="age2 age" type="number" id="phone" name="phone" /><br/><br/>
                    </div>
                    <div class="form1">
                        <div class="val1">Mother's Name</div>
                        <div class="val2">Phone</div>
                    </div>
                    <div class="form2">
                        <input class="age" type="text" id="fname" name="fname" />
                        <input class="age2 age" type="number" id="phone" name="phone" /><br/><br/>
                    </div>
                    <div class="form1">
                        <div class="val1">Guardian Name</div>
                        <div class="val2">Phone</div>
                    </div>
                    <div class="form2">
                        <input class="age" type="text" id="fname" name="fname" />
                        <input class="age2 age" type="number" id="phone" name="phone" /><br/><br/>
                    </div>
                    <div class="form1">
                        <div class="val1">Adress</div>
                        <div class="val2 a2">State</div>
                    </div>
                    <div class="form2">
                        <input class="age" type="text" id="fname" name="fname" />
                        <input class="age2 age" type="text" id="phone" name="phone" /><br/><br/>
                    </div>
                    <div class="form1">
                        <div class="val1">City</div>
                        <div class="val2 a2">Pin Code</div>
                    </div>
                    <div class="form2">
                        <input class="age" type="text" id="fname" name="fname" />
                        <input class="age2 age" type="number" id="phone" name="phone" /><br/><br/>
                    </div>
                </form> 
                <div class="em">
                    <input type="checkbox" class="tick"/>
                    <div class="tor">I agree with Stayfree Terms of Service, Privacy and <br/> Policy and default Notification Setting</div>
                </div>
                
                <Link class = "formsub" to='/Share Location'>Submit</Link>
            </div>
        </div>
    </div>
    </div>
  )
}
