#include "building.h"

#ifndef BUILDING_CPP
#define BUILDING_CPP

Building buildings[]
{
    {"NoBuilding", noBuildingType, "NB"},
    {"InvalidBuilding", baseInvalidBuilding, "IB"},
    {"City", Urban, "CT"},
    {"Farm", Rural, "FM"}
};

#endif