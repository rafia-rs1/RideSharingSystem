#include "City.h"

int main() {
    City c("Lahore");

    c.addLocation("DHA");
    c.addLocation("Gulberg");
    c.addLocation("Model Town");

    c.displayLocations();

    return 0;
}
