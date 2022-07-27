#include "../baseStructs/building.h"

#ifndef BUILDINGS_H
#define BUILDINGS_H

Building buildings[]
{
    {"NoBuilding", noBuildingType, "  "},
    {"InvalidBuilding", baseInvalidBuilding, "IB"},
    {"City", Urban, "CT"},
    {"Farm", Rural, "FM"}
};

#endif