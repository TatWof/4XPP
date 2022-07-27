#include <ostream>
#include <limits>

#ifndef TERRAIN_H
#define TERRAIN_H

Terrain terrains[]
{
{Land, Grass, NoFeature, "Grasslands", "GL"},
{Land, Grass, Hill, "GrassyHill", "GH"},
{Land, Grass, Trees, "Forest", "FT"},
{Land, Grass, Jungle, "Rainforest", "RF"},

{Land, Sand, Hill, "Dunes", "DN"},
{Land, Sand, Trees, "Savannah", "SV"},
{Land, Sand, Coast, "SandyCoast", "SC"},
{Land, Sand, Desert, "SandyDesert", "SD"},
{Land, Sand, Ponds, "Oasis", "OS"},

{Land, Rock, Hill, "RockyHill", "RH"},
{Land, Rock, Peak, "Mountain", "MT"},
{Land, Rock, Coast, "RockyCoast", "RC"},
{Land, Rock, Lava, "Volcano", "VL"},

{Land, Snow, NoFeature, "Permafrost", "PF"},
{Land, Snow, Hill, "SnowyHill", "SH"},
{Land, Snow, Trees, "EvergreenForest", "EF"},
{Land, Snow, Desert, "Tundra", "TN"},
{Land, Snow, Ponds, "FrozenPonds", "ZP"},
{Land, Snow, Peak, "SnowyPeaks", "SP"},

{Land, FrozenWater, NoFeature, "IceBridge", "IB"},

{Water, Shallow, NoFeature, "Lakebed", "LB"},
{Water, Shallow, Coast, "CoastalWaters", "CW"},

{Water, Sea, NoFeature, "OpenSea", "OC"},
{Water, Sea, Ice, "IcyWaters", "IW"},

{Water, Ocean, NoFeature, "OpenOcean", "OO"},
{Water, Ocean, Ice, "Glacier", "GC"},
{Water, Ocean, Peak, "MidOceanRidge", "MR"},
{Water, Ocean, Lava, "UnderwaterVent", "UV"},

{baseInvaildTerrain, nullTerrainVariant, NoFeature, "InvaildTerrain", "IT"},

};

/*Everything past this point is for the struct */

enum baseTerrainType{baseInvaildTerrain = 0, Land = 1, Water = 2};
enum TerrainVariant
{
    nullTerrainVariant = 0,
//  Land variants
    Grass = 0, Sand = 1, Rock = 2, Snow = 3, FrozenWater = 4,
//  Water variants
    Shallow = 0, Sea = 1, Ocean = 2
};
enum TerrainFeature
{
    NoFeature = 0,
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
enum Temperature{Hot, Warm, Temperate, Cold, Freezing};
enum Humidity{Wet, Moderate, Dry};

struct Terrain
{
    std::string name{};
    std::string key{};
    baseTerrainType terrainType{baseInvaildTerrain};
    TerrainVariant variant{nullTerrainVariant};
    TerrainFeature feature{NoFeature};
    Temperature tempC;
    Humidity humid;
    
    Terrain()
    { 
        this->terrainType = baseInvaildTerrain;
        this->variant = nullTerrainVariant;
        this->feature = NoFeature;
        this->name = "InvaildTerrain";
        this->key = "IT";
    } 
    Terrain(baseTerrainType terrainType, TerrainVariant variant, TerrainFeature feature, std::string name , std::string key)
    { 
        this->terrainType = terrainType;
        this->variant = variant;
        this->feature = feature;
        this->name = name;
        this->key = key;
    } 
    ~Terrain();

    bool operator==(Terrain compare)
    {
        if (terrainType == compare.terrainType && variant == compare.variant && feature == compare.feature)
            return true;
        else if (baseInvaildTerrain == compare.terrainType && nullTerrainVariant == compare.variant) return true;
        else return false;
    }
    
    bool operator==(baseTerrainType compare)
    {
        if(compare == terrainType) return true;
        return false;
    }

    bool operator==(TerrainVariant compare)
    {
        if(compare == variant) return true;
        return false;
    }

    bool operator==(TerrainFeature compare)
    {
        if(compare == feature) return true;
        return false;
    }

    void operator=(Terrain compare)
    {
        terrainType = compare.terrainType;
        variant = compare.variant;
        feature = compare.feature;
        name = compare.name;
        key = compare.key;
    }
};

    std::ostream& operator<<(std::ostream& out, Terrain t)
    {
        out << t.name;
        return out;
    }


#endif