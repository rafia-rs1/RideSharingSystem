// ================= Driver.cpp =================
#include "Driver.h"
#include <iostream>
using namespace std;


Driver::Driver(int i, string n, string loc, bool a) {
id = i;
name = n;
location = loc;
available = a;
}


void Driver::display() {
cout << "Driver ID: " << id << endl;
cout << "Name: " << name << endl;
cout << "Location: " << location << endl;
if (available)
cout << "AVAILABLE" << endl;
else
cout << "NOT AVAILABLE" << endl;
}