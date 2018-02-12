#include <iostream>
#include <string>
#include <vector>
#include "Car.h"
using namespace std;

int main(){
	vector <Car> myVector;
	int myCar;
	
	
	cout << "Please enter values: ";
	do {
		
	cin >> myCar;
	
	myVector.push_back(myCar);
	}while (myCar !=4);

	cout << "myVector stores: " << myVector.size() << "numbers" << endl;
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}
	
	return 0;
}
