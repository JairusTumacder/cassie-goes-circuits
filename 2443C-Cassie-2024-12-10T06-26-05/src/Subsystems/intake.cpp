#include "vex.h"

void runIntake(double speed){
  intake.spin(fwd, speed, pct);
  conveyor.spin(fwd, speed, pct);
}

void runOuttake(double speed){
  intake.spin(reverse, speed, pct);
  conveyor.spin(reverse, speed, pct);
}

void stopIntake(){
  intake.stop();
  conveyor.stop();
}