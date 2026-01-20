#ifndef CITY_H
#define CITY_H

#include <string>
#include <vector>

class City {
private:
    std::string name;
    std::vector<std::string> locations;

public:
    City();
    City(const std::string& cityName);

    void addLocation(const std::string& location);
    void displayLocations() const;

    std::string getName() const;
};

#endif
