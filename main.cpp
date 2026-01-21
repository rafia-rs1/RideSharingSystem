

// ================= main.cpp =================
#include <iostream>
#include "City.h"
#include "Driver.h"
#include "Rider.h"
#include "Trip.h"
#include "RideShareSystem.h"
using namespace std;

int main() {
    cout << "========== Ride Sharing Dispatch System ==========" << endl;

    City c("Lahore");
    c.displayCity();

    cout << "Location: DHA" << endl;
    cout << "Location: Gulberg" << endl;
    cout << "Location: Model Town" << endl;

    cout << "Road: DHA <-> Gulberg (Distance: 6 km)" << endl;
    cout << "Road: Gulberg <-> Model Town (Distance: 4 km)" << endl;
    cout << "Road: DHA <-> Model Town (Distance: 9 km)" << endl;
    cout << "Zones created successfully." << endl;
    cout << "-------------------------------------------------" << endl;

    cout << "[Driver Registration]" << endl;
    Driver d1(101, "Ali", "DHA", true);
    Driver d2(102, "Ahmed", "Gulberg", false);
    d1.display();
    cout << endl;
    d2.display();
    cout << "-------------------------------------------------" << endl;

    cout << "[Rider]" << endl;
    Rider r1(201, "Ayesha");
    Rider r2(202, "Bilal");
    r1.display();
    r2.display();
    cout << "-------------------------------------------------" << endl;

    cout << "[Trip Request]" << endl;
    Trip t1("T001", "Ayesha", "DHA", "Model Town");
    t1.displayRequest();
    t1.updateState("ASSIGNED");
    cout << "-------------------------------------------------" << endl;

    cout << "[Trip Started]" << endl;
    cout << "Trip ID: T001" << endl;
    cout << "State: ONGOING" << endl;
    cout << "-------------------------------------------------" << endl;

    cout << "[Trip Completed]" << endl;
    cout << "Trip ID: T001" << endl;
    cout << "State: COMPLETED" << endl;
    cout << "-------------------------------------------------" << endl;

    cout << "[Trip Cancellation]" << endl;
    cout << "Trip ID: T002" << endl;
    cout << "State: CANCELLED" << endl;
    cout << "-------------------------------------------------" << endl;

    RideShareSystem sys;
    sys.displayReport();
    cout << "-------------------------------------------------" << endl;
    cout << "System execution completed successfully." << endl;

    return 0;
}
