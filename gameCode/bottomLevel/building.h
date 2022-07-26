#ifndef BUILDING_H
#define BUILDING_H

enum baseBuildingType{City, Farm, Factory, Mine, LumberMill};

struct Building
{
    baseBuildingType buildingType;
};


#endif