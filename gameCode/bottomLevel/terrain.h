#include <ostream>

#ifndef TERRAIN_H
#define TERRAIN_H

/*Everything past this point is for the struct */

enum baseTerrainType{baseInvalidTerrain = 0, Land = 1, Water = 2};
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
    baseTerrainType terrainType{baseInvalidTerrain};
    TerrainVariant variant{nullTerrainVariant};
    TerrainFeature feature{NoFeature};
    Temperature tempC;
    Humidity humid;
    
    Terrain()
    { 
        this->terrainType = baseInvalidTerrain;
        this->variant = nullTerrainVariant;
        this->feature = NoFeature;
        this->name = "InvaildTerrain";
        this->key = "IT";
    } 
    Terrain(std::string name, baseTerrainType terrainType, TerrainVariant variant, TerrainFeature feature, std::string key)
    { 
        this->terrainType = terrainType;
        this->variant = variant;
        this->feature = feature;
        this->name = name;
        this->key = key;
    }

    bool operator==(Terrain compare)
    {
        if (terrainType == compare.terrainType && variant == compare.variant && feature == compare.feature)
            return true;
        else if (baseInvalidTerrain == compare.terrainType) return true;
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