#include "City.h"
#include "Driver.h"

int main() {
    City c("Lahore");

    c.addLocation("DHA");
    c.addLocation("Gulberg");
    c.addLocation("Model Town");

    c.displayLocations();

    Driver d1(1, "Ali", "DHA");

    d1.display();

    d1.assignTrip();
    d1.display();

    d1.completeTrip();
    d1.setLocation("Gulberg");
    d1.display();
    return 0;
}
