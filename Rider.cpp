// ================= Rider.cpp =================
#include "Rider.h"
#include <iostream>
using namespace std;


Rider::Rider(int i, string n) {
id = i;
name = n;
}


void Rider::display() {
cout << "Rider ID: " << id << endl;
cout << "Name: " << name << endl;
}