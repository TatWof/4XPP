#include "terrain.h"
#include "resource.h"
#include "building.h"
#include "unit.h"
#include "faction.h"

#ifndef TILE_H
#define TILE_H

struct Tile
{
    Terrain terrain;
    Building building;
    Resource resource;
    Unit unit;
    Faction ownership;
    bool inView;
    bool hasViewed;
};


#endif