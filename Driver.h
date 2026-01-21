

// ================= Driver.h =================
#ifndef DRIVER_H
#define DRIVER_H
#include <string>
using namespace std;


class Driver {
public:
int id;
string name;
string location;
bool available;


Driver(int i, string n, string loc, bool a);
void display();
};


#endif