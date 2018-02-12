#include <iostream>
#include <string>
using namespace std;

class Car {
private:
	int wheels;
	string chassisNum;
	
public:
	Car(wheels=0, chassisNum=" ");
	void setWheels (int w);
	
	int getWheels();
	
	void setChassisNum(string c);

	string getChassisNum();
	
};
