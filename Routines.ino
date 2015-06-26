//A demo routine

void demo(){
 forward();
 delay(DELAY);
 backward();
 delay(DELAY);
 turnRight();
 delay(DELAY);
 turnLeft();
 delay(DELAY);
}

//A ping Routine

void pingLogic(){

  //read from the sensor
  ping();

  //check if the sensor value is greater than 19cm
  if(cm <= 19){
    backward();
    delay(100);
    brake();
    turnRight();
    delay(100);
    brake();
    delay(100);
  }
  else{
    //if true, go forward
    forward();
    delay(100);
    brake();
    delay(100);
  }
}

void pingValues(){
  ping();
  Serial.println(cm);
  }

