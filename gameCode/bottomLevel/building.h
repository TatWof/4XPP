#include <ostream>

#ifndef BUILDING_H
#define BUILDING_H

enum baseBuildingType{baseInvalidBuilding = 0, noBuildingType = 1, Urban = 2, Rural = 3, Industrial = 4};

struct Building
{
    std::string name;
    std::string key;
    baseBuildingType buildingType;

    Building()
    {
        name = "InvaildBuilding";
        key = "  ";
        buildingType = baseInvalidBuilding;
    }
    Building(std::string name, baseBuildingType, std::string key)
    {
        this->name = name;
        this->key = key;
        this->buildingType = buildingType;
    }
    
    bool operator==(Building compare)
    {
        if (name == compare.name && buildingType == compare.buildingType) return true;
        else if (compare.buildingType == baseInvalidBuilding) return true;
        else return false;
        
    }
    
    void operator=(Building compare)
    {
        name = compare.name;
        key = compare.key;
        buildingType = compare.buildingType;
    }

};

std::ostream& operator<<(std::ostream& out, Building b)
{
    out << b.name;
    return out;
}


#endif