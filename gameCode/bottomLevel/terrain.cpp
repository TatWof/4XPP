#include "terrain.h"

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

{baseInvalidTerrain, nullTerrainVariant, NoFeature, "InvaildTerrain", "IT"},

};