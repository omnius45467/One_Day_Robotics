//master delay
const int DELAY = 2;




//speed
const int speedPwr = 50;
const int speedPwrHalf = 20;




//motor A
const int motorA_dir = 12;
const int motorA_pwm = 3;
const int motorA_brk = 9;
const int motorA_cs = A0;




//motor B
const int motorB_dir = 13;
const int motorB_pwm = 11;
const int motorB_brk = 8;
const int motorB_cs = A1;




// this constant won't change.  It's the pin number
// of the sensor's output:
const int pingVcc = 4;
const int pingTrig = 5;
const int pingEcho = 6;
const int pingGnd = 7;




// establish variables for duration of the ping, 
// and the distance result in inches and centimeters:
long duration, inches, cm;





void setup(){
  Serial.begin(9600);
  Serial.println("starting the robot");
  pinMode(motorA_dir, OUTPUT);
  pinMode(motorB_dir, OUTPUT);
  pinMode(motorA_pwm, OUTPUT);
  pinMode(motorB_pwm, OUTPUT);

        
}




void loop(){
//  demo();
  pingLogic();

}


