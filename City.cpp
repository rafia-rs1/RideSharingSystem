#include "City.h"
#include <iostream>

City::City() {
    name = "Unknown";
}

City::City(const std::string& cityName) {
    name = cityName;
}

void City::addLocation(const std::string& location) {
    locations.push_back(location);
}

void City::displayLocations() const {
    std::cout << "City: " << name << std::endl;
    std::cout << "Locations:" << std::endl;

    for (const std::string& loc : locations) {
        std::cout << "- " << loc << std::endl;
    }
}

std::string City::getName() const {
    return name;
}
