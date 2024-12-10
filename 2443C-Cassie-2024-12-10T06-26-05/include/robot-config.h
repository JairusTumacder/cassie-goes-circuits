using namespace vex;

extern brain Brain;

//To set up a motor called LeftFront here, you'd use
//extern motor LeftFront;

//Add your devices below, and don't forget to do the same in robot-config.cpp:
extern controller Controller;
extern motor leftFront;
extern motor leftMiddle;
extern motor leftBack;
extern motor rightFront;
extern motor rightMiddle;
extern motor rightBack;
extern motor intake;
extern motor conveyor;
extern motor arm;
extern rotation armRotation;
extern digital_out mogo;
extern digital_out doinker;

void  vexcodeInit( void );