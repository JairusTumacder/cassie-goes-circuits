#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

controller Controller = controller(primary);
motor leftFront = motor(PORT20, ratio6_1, true);
motor leftMiddle = motor(PORT8, ratio6_1, true);
motor leftBack = motor(PORT9, ratio6_1, true);
motor rightFront = motor(PORT13, ratio6_1, false);
motor rightMiddle = motor(PORT3, ratio6_1, false);
motor rightBack = motor(PORT2, ratio6_1, false);
motor intake = motor(PORT10, ratio18_1, false);
motor conveyor = motor(PORT12, ratio36_1, true);
motor arm = motor(PORT4, ratio18_1, false);
digital_out mogo = digital_out(Brain.ThreeWirePort.A);
digital_out doinker = digital_out(Brain.ThreeWirePort.B);
rotation armRotation = rotation(PORT1);

//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h:

void vexcodeInit( void ) {
  // nothing to initialize
}