#include "robotarm.h"
RobotArm robotarm; 

void setup() {
  Serial.begin (9600); 
  robotarm.PinSetup();
  
  //SteinSaksPapir();
}

void loop() {
    //styr roboten med joystick:
    robotarm.moveXYZ();   

/*
    robotarm.ChangeGripper(true); //open gripper 
    robotarm.MoveJ(80, 112, 116, 3);
    robotarm.MoveJ(80, 142, 96, 3);
    robotarm.ChangeGripper(false);
    robotarm.MoveJ(80, 84, 152, 3);
    
    robotarm.MoveJ(58, 80, 169, 3);
    robotarm.ChangeGripper(true);
    robotarm.MoveJ(90, 84, 152, 3);
    robotarm.MoveJ(80, 112, 116, 3);
    robotarm.MoveJ(80, 142, 96, 3);
    robotarm.ChangeGripper(false); //close gripper
    robotarm.MoveJ(80, 84, 152, 3);
    robotarm.MoveJ(118, 80, 169, 3);
    robotarm.ChangeGripper(true);
    robotarm.MoveJ(80, 84, 152, 3);
*/
}

void SteinSaksPapir(){
  robotarm.MoveJ(90, 105, 160, 4); //opp
  delay(1000); //vent 1 sekund
  robotarm.MoveJ(90, 130, 126, 1); //ned
  robotarm.MoveJ(90, 105, 160, 1); //opp
  robotarm.MoveJ(90, 130, 126, 1); //ned
  robotarm.MoveJ(90, 105, 160, 1); //opp

  
  randomSeed(analogRead(4));
  int randNumber = random(1, 4);
 
  switch(randNumber){
      case 1 :
      /*
       * Skriv din posisjon for 'stein' her
       */
      robotarm.MoveJ(121, 130, 126, 1); //stein
      break;
      
      case 2 :
      /*
       * Skriv din posisjon for 'saks' her
       */
      robotarm.MoveJ(90, 130, 126, 1); //saks

      break;
      
      case 3 :
      /*
       * Skriv din posisjon for 'papir' her
       */
      robotarm.MoveJ(56, 130, 126, 1); //papir
      break;
  }
  delay(1000);
}
