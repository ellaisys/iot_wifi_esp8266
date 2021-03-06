const char CUSTOM_HTML_PAGE_CONNECTED[] PROGMEM = 
R"=====(
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="refresh" content="10">
        <meta name="viewport" content="width=device-width, initial-scale=1">
        <title>ESP8266 Automation</title>
        <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css" integrity="sha384-BVYiiSIFeK1dGmJRAkycuHAHRg32OmUcww7on3RYdg4Va+PmSTsz/K68vbdEjh4u" crossorigin="anonymous">
        
        <!-- Optional theme -->
        <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap-theme.min.css" integrity="sha384-rHyoN1iRsVXV4nD0JutlnGaslCJuC7uwjduW9SVrLvRYooPp2bWYgmgJQIXwl/Sp" crossorigin="anonymous">

        <style>
            /* Small devices (tablets, 768px and up) */
            @media (max-width: 767px) {
              .btn.btn-iot {
                  width: 8em;
                  height: 8em;
                  margin: 0.5em 0.5em 0.5em 0.5em;
                  outline: none;
                  background-color: lightgray;
                  color: #4c4b4b;
              }
  
              .btn.btn-iot p {
                  text-align: center;
                  padding-top: 0.1em;
                  text-transform: uppercase;
                  font-size: 1.2em;
                  color: #636363;
              }

              .btn.btn-iot span {
                  font-size: 70px;
              }
              
              .btn.btn-iot p.iot-switch-no {
                  text-align: left;
                  margin: 0px;
                  padding: 0px;
                  font-size: xx-large;
                  margin-bottom: -20px;
              }
            }
            
            /* Small devices (tablets, 768px and up) */
            @media (min-width: 768px) {
              .btn.btn-iot {
                  width: 15em;
                  height: 15em;
                  margin: 2em 2em 1em 2em;
                  outline: none;
                  background-color: lightgray;
                  color: #4c4b4b;
              }

              .btn.btn-iot p {
                  text-align: center;
                  padding-top: 0.1em;
                  text-transform: uppercase;
                  font-size: 1.5em;
                  color: #636363;
              }

              .btn.btn-iot span {
                  font-size: 125px;
              }
              
              .btn.btn-iot p.iot-switch-no {
                  text-align: left;
                  margin: 0px;
                  padding: 0px;
                  font-size: xx-large;
                  margin-bottom: -20px;
              }
            }
            
            /* Medium devices (desktops, 992px and up) */
            @media (min-width: 992px) {
              .btn.btn-iot {
                  width: 10em;
                  height: 10em;
                  margin: 1em 2em 1em 2em;
                  outline: none;
                  background-color: lightgray;
                  color: #4c4b4b;
              }

              .btn.btn-iot p {
                  text-align: center;
                  padding-top: 0.1em;
                  text-transform: uppercase;
                  font-size: 1.2em;
                  color: #636363;
              }

              .btn.btn-iot span {
                  font-size: 70px;
              }
              
              .btn.btn-iot p.iot-switch-no {
                  text-align: left;
                  margin: 0px;
                  padding: 0px;
                  font-size: xx-large;
                  margin-bottom: -20px;
              }
            }
            
            /* Large devices (large desktops, 1200px and up) */
            @media (min-width: 1200px) {
              .btn.btn-iot {
                  width: 180px;
                  height: 180px;
                  margin: 20px 9px 0px 9px;
                  outline: none;
                  background-color: lightgray;
                  color: #4c4b4b;
              }

              .btn.btn-iot p {
                  text-align: center;
                  padding-top: 0.1em;
                  text-transform: uppercase;
                  font-size: 1.2em;
                  color: #636363;
              }

              .btn.btn-iot span {
                  font-size: 70px;
              }
              
              .btn.btn-iot p.iot-switch-no {
                  text-align: left;
                  margin: 0px;
                  padding: 0px;
                  font-size: xx-large;
                  margin-bottom: -20px;
              }
            }
            .col-centered {
              float: none;
              margin: 0 auto;
            }
            .btn-responsive {
              white-space: normal !important;
              word-wrap: break-word;
            }
            .btn:focus, .btn:active:focus {
                outline: none;
            }
            .btn.btn-iot.btn-iot-on {}
            .btn.btn-iot.btn-iot-off {}
            .btn.btn-iot.btn-iot-disabled {
                display: none;
            }
            .btn.btn-iot.btn-iot-on span:before {
                content: "\e084";
                color:rgb(28, 161, 16);
            }
            .btn.btn-iot.btn-iot-off span:before {
                content: "\e083";
                color:#d61b1b;
            }
            .btn.btn-iot.btn-iot-disabled span:before {
                content: "\e017";
                color:#a5a5a5;
            }
            .btn.btn-iot.btn-iot-on .btn-label:after {
                content: 'on';
            }
            .btn.btn-iot.btn-iot-off .btn-label:after {
                content: 'off';
            }
            .btn.btn-iot.btn-iot-disabled .btn-label:after {
                content: 'disabled';
            }
        </style>
    </head>
    <body>
        <div class="container-fluid">
            <div class="row text-center text-uppercase text-white bg-primary">
                <h2 style="font-size:2.5vw;">IOT with ESP8266 NodeMCU</h2>
            </div>

            <div class="row">
                <form method="post" action="/esp8266">
                    <div class="col-md-9 col-xs-12 col-centered text-center">
                        <button type="submit" name="iot_button" value="0" class="btn btn-lg btn-iot [BTN_IOT_0]">
                            <p class="iot-switch-no">0</p>
                            <span class="glyphicon" aria-hidden="true"></span> 
                            <p class="btn-label"></p>
                        </button>

                        <button type="submit" name="iot_button" value="1" class="btn btn-lg btn-iot [BTN_IOT_1]">
                            <p class="iot-switch-no">1</p>
                            <span class="glyphicon" aria-hidden="true"></span> 
                            <p class="btn-label"></p>
                        </button>

                        <button type="submit" name="iot_button" value="2" class="btn btn-lg btn-iot [BTN_IOT_2]">
                            <p class="iot-switch-no">2</p>
                            <span class="glyphicon" aria-hidden="true"></span> 
                            <p class="btn-label"></p>
                        </button>

                        <button type="submit" name="iot_button" value="3" class="btn btn-lg btn-iot [BTN_IOT_3]">
                            <p class="iot-switch-no">3</p>
                            <span class="glyphicon" aria-hidden="true"></span> 
                            <p class="btn-label"></p>
                        </button>

                        <button type="submit" name="iot_button" value="4" class="btn btn-lg btn-iot [BTN_IOT_4]">
                            <p class="iot-switch-no">4</p>
                            <span class="glyphicon" aria-hidden="true"></span> 
                            <p class="btn-label"></p>
                        </button>

                        <button type="submit" name="iot_button" value="5" class="btn btn-lg btn-iot [BTN_IOT_5]">
                            <p class="iot-switch-no">5</p>
                            <span class="glyphicon" aria-hidden="true"></span> 
                            <p class="btn-label"></p>
                        </button>

                        <button type="submit" name="iot_button" value="6" class="btn btn-lg btn-iot [BTN_IOT_6]">
                            <p class="iot-switch-no">6</p>
                            <span class="glyphicon" aria-hidden="true"></span> 
                            <p class="btn-label"></p>
                        </button>

                        <button type="submit" name="iot_button" value="7" class="btn btn-lg btn-iot [BTN_IOT_7]">
                            <p class="iot-switch-no">7</p>
                            <span class="glyphicon" aria-hidden="true"></span> 
                            <p class="btn-label"></p>
                        </button>

                        <button type="submit" name="iot_button" value="8" class="btn btn-lg btn-iot [BTN_IOT_8]">
                            <p class="iot-switch-no">8</p>
                            <span class="glyphicon" aria-hidden="true"></span> 
                            <p class="btn-label"></p>
                        </button>

                        <button type="submit" name="iot_button" value="9" class="btn btn-lg btn-iot [BTN_IOT_9]">
                            <p class="iot-switch-no">9</p>
                            <span class="glyphicon" aria-hidden="true"></span> 
                            <p class="btn-label"></p>
                        </button>
                    </div>
                </form>
            </div>
        </div>
    </body>
</html>
)=====";
