#include "vex.h"

void mogoOn(){
  mogo.set(true);
}

void mogoOff(){
  mogo.set(false);
}

void doinkerOn(){
  doinker.set(true);
}

void doinkerOff(){
  doinker.set(false);
}

void toggleMogoMech() {
  if (!mogo.value()) {
    mogoOn();
  } else {
    mogoOff();
  }
}

void toggleDoinkerMech() {
  if (!doinker.value()) {
    doinkerOn();
  } else {
    doinkerOff();
  }
}