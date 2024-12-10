#include "vex.h"

void intakeControls(){
  if(Controller.ButtonR1.pressing()){
    runIntake(127);
  }
  else if(Controller.ButtonR2.pressing()){
    runOuttake(127);
  }
  else if(Controller.ButtonL2.pressing()){
    runIntake(30);
  }
  else{
    stopIntake();
  }
}

void pneumaticsControls(){
  Controller.ButtonL1.pressed(toggleMogoMech);
  Controller.ButtonX.pressed(toggleDoinkerMech);
}

void armControls(){
  arm.setBrake(hold);
  if(Controller.ButtonUp.pressing()){
    arm.spin(fwd, 50, pct);
  }
  else if(Controller.ButtonDown.pressing()){
    arm.spin(reverse, 50, pct);
  }
  else{
    arm.stop();
  }
}