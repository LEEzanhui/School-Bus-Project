#ifndef CONTROLLER_H_
#define CONTROLLER_H_
#include <iostream>
#include <string>
#include "init.hpp"
#include "passenger.hpp"

class BusStation;
class SchoolBus;

void controllerMode(BusStation *busStation, SchoolBus *schoolBus);
void setMode(BusStation *busStation, SchoolBus *schoolBus);
void updateStation(BusStation *busStation);
void updateBus(SchoolBus *schoolBus, BusStation *busStation);

void runningFun(int id, SchoolBus *schoolBus);
void passNumFun(int id, SchoolBus *schoolBus);
void lineFun(int id, SchoolBus *schoolBus, BusStation *busStation);


#endif
