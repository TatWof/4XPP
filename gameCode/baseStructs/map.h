#include <vector>
#include "../settings.h"
#include "tile.h"

#ifndef MAP_H
#define MAP_H

struct Map
{
    Map();
    ~Map();
    
    std::vector<std::vector<Tile>> map;
    unsigned int X_MapSize;
    unsigned int Y_MapSize;

};




#endif