// ================= City.cpp =================
#include "City.h"
#include <iostream>
using namespace std;


City::City(string name) {
cityName = name;
}


void City::displayCity() {
cout << "City Initialized: " << cityName << endl;
}