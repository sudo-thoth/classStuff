#pragma once
#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

class Car {
public:
	Car();
	Car(string col, bool ride, string size1, int wheel1, int door1, string brand);

	void drive();
	int getwheels();
	void setcolor(string color);

private:
	string color;
	bool rideability;
	string size; 
	int wheels;
	int door;
	string brand;
};