#include <iostream>
#include <vector>
#include "header.h"
using namespace std;

int main(){
	vector <int> myVector;
	int myCar;
	
	for (int l = 0; l <= 3; l++){
	cout << "Please enter values: ";
	
	cin >> myCar;
	
	myVector.push_back(myCar);
	
	cout << "myVector stores: " << myVector.size() << "numbers" << endl;
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}
	
	return 0;
}
