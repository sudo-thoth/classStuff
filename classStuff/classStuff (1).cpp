// classStuff.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Car.h"
#include <iostream>
#include<string>
using namespace std;


int main()
{
	Car default_Car = Car();
	Car customCar = Car("Silver", true, "SUV", 4, 4, "Toyota");
	
	int myWheels = customCar.getwheels();
	cout << "I have " << myWheels << " wheels on my car." << endl;


    return 0;
}

