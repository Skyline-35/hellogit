#include <iostream>
#include "Car.h"

Car::car(int w, string c){
		wheels= w;
		chassisNum= c;
		}
		
void Car::setWheels(int w){
		wheels=w;
		}

int Car::getWheels() { return wheels; }

void Car::setChassisNum(string c){
		chassisNum = c;
		}
		
string Car::getChassisNum() { return chassisNum; }
