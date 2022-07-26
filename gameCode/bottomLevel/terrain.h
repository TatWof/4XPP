#include <ostream>

#ifndef TERRAIN_H
#define TERRAIN_H

enum baseTerrainType{Invaild = 0, Land = 1, Water = 2};
enum TerrainVariant
{
//  Land variants
    Grass = 0, Sand = 1, Rock = 2, Snow = 3, FrozenWater = 4,
//  Water variants
    Shallow = 0, Sea = 1, Ocean = 2
};
enum TerrainFeature
{
    None = 0,
    Hill = 1, 
    Trees = 2, 
    Jungle = 3, 
    Desert = 4, 
    Ponds = 5, 
    Coast = 6, 
    Peak = 7,
    Lava = 8,
    Ice = 9,
};
enum Terrains
{
    InvaildTerrain, 
    Grasslands, GrassyHill, Forest, Rainforest,
    Dunes, Savannah, SandyCoast, SandyDesert, Oasis,
    RockyHill, Mountain, RockyCoast, Volcano,
    Permafrost, SnowyHill, EvergreenForest, Tundra, FrozenPonds, SnowyPeaks,
    IceBridge,
    Lakebed, CoastalWaters, OpenSea, OpenOcean, MidOceanRidge, UnderwaterVent, IcyWaters
};
enum Temperature{Hot, Warm, Temperate, Cold, Freezing};
enum Humidity{Wet, Moderate, Dry};

struct Terrain
{
    baseTerrainType terrianType;
    TerrainVariant variant;
    TerrainFeature feature;
    Temperature tempC;
    Humidity humid;
    
    bool operator==(Terrains compare)
    {
        if (compare == Grasslands)
        {
            if (terrianType == Land && variant == Grass && feature == None)
            {return true;}
        }
        if (compare == GrassyHill)
        {
            if (terrianType == Land && variant == Grass && feature == Hill)
            {return true;}
        }
        if (compare == Forest)
        {
            if (terrianType == Land && variant == Grass && feature == Trees)
            {return true;}
        }
        if (compare == Rainforest)
        {
            if (terrianType == Land && variant == Grass && feature == Jungle)
            {return true;}
        }
        if (compare == Dunes)
        {
            if (terrianType == Land && variant == Sand && feature == Hill)
            {return true;}
        }
        if (compare == Savannah)
        {
            if (terrianType == Land && variant == Sand && feature == Trees)
            {return true;}
        }
        if (compare == SandyCoast)
        {
            if (terrianType == Land && variant == Sand && feature == Coast)
            {return true;}
        }
        if (compare == SandyDesert)
        {
            if (terrianType == Land && variant == Sand && feature == Desert)
            {return true;}
        }
        if (compare == Oasis)
        {
            if (terrianType == Land && variant == Sand && feature == Ponds)
            {return true;}
        }
        if (compare == RockyHill)
        {
            if (terrianType == Land && variant == Rock && feature == Hill)
            {return true;}
        }
        if (compare == Mountain)
        {
            if (terrianType == Land && variant == Rock && feature == Peak)
            {return true;}
        }
        if (compare == RockyCoast)
        {
            if (terrianType == Land && variant == Rock && feature == Coast)
            {return true;}
        }
        if (compare == Volcano)
        {
            if (terrianType == Land && variant == Grass && feature == TerrainFeature::Lava)
            {return true;}
        }
        if (compare == Permafrost)
        {
            if (terrianType == Land && variant == Snow && feature == None)
            {return true;}
        }
        if (compare == SnowyHill)
        {
            if (terrianType == Land && variant == Snow && feature == Hill)
            {return true;}
        }
        if (compare == EvergreenForest)
        {
            if (terrianType == Land && variant == Snow && feature == Trees)
            {return true;}
        }
        if (compare == Tundra)
        {
            if (terrianType == Land && variant == Snow && feature == Desert)
            {return true;}
        }
        if (compare == FrozenPonds)
        {
            if (terrianType == Land && variant == Snow && feature == Ponds)
            {return true;}
        }
        if (compare == SnowyPeaks)
        {
            if (terrianType == Land && variant == Snow && feature == Peak)
            {return true;}
        }
        if (compare == IceBridge)
        {
            if (terrianType == Land && variant == FrozenWater && feature == None)
            {return true;}
        }
        if (compare == Lakebed)
        {
            if (terrianType == Water && variant == Shallow && feature == None)
            {return true;}
        }
        if (compare == CoastalWaters)
        {
            if (terrianType == Water && variant == Shallow && feature == Coast)
            {return true;}
        }
        if (compare == OpenSea)
        {
            if (terrianType == Water && variant == Sea && feature == None)
            {return true;}
        }
        if (compare == OpenOcean)
        {
            if (terrianType == Water && variant == Ocean && feature == None)
            {return true;}
        }
        if (compare == MidOceanRidge)
        {
            if (terrianType == Water && variant == Ocean && feature == Peak)
            {return true;}
        }
        if (compare == UnderwaterVent)
        {
            if (terrianType == Water && variant == Ocean && feature == Lava)
            {return true;}
        }
        if (compare == IcyWaters)
        {
            if (terrianType == Water && variant == Ocean && feature == Ice)
            {return true;}
        }
        return false;
    }
};


#endif