#include "stdafx.h"
#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

Car::Car(string col, bool ride, string size1, int wheel1, int door1, string brand) {
	color = col;
	rideability = ride;
	size = size1;
	wheels = wheel1;
	door = door1;

}

Car::Car() {
	color = "Black";
	rideability = true;
	size = "car";
	wheels = 4;
	door = 4;
	brand = "trashcan";
}


int Car::getwheels() {
	return wheels;
}