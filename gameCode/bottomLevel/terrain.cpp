#include "terrain.h"

Terrain terrains[]
{
{"InvaildTerrain", baseInvalidTerrain, nullTerrainVariant, NoFeature, "IT"},

{"Grasslands", Land, Grass, NoFeature, "GL"},
{"GrassyHill", Land, Grass, Hill, "GH"},
{"Forest", Land, Grass, Trees, "FT"},
{"Rainforest", Land, Grass, Jungle, "RF"},

{"Dunes", Land, Sand, Hill, "DN"},
{"Savannah", Land, Sand, Trees, "SV"},
{"SandyCoast", Land, Sand, Coast, "SC"},
{"SandyDesert", Land, Sand, Desert, "SD"},
{"Oasis", Land, Sand, Ponds, "OS"},

{"RockyHill", Land, Rock, Hill, "RH"},
{"Mountain", Land, Rock, Peak, "MT"},
{"RockyCoast", Land, Rock, Coast, "RC"},
{"Volcano", Land, Rock, Lava, "VL"},

{"Permafrost", Land, Snow, NoFeature, "PF"},
{"SnowyHill", Land, Snow, Hill, "SH"},
{"EvergreenForest", Land, Snow, Trees, "EF"},
{"Tundra", Land, Snow, Desert, "TN"},
{"FrozenPonds", Land, Snow, Ponds, "ZP"},
{"SnowyPeaks", Land, Snow, Peak, "SP"},

{"IceBridge", Land, FrozenWater, NoFeature, "IB"},

{"Lakebed", Water, Shallow, NoFeature, "LB"},
{"CoastalWaters", Water, Shallow, Coast, "CW"},

{"OpenSea", Water, Sea, NoFeature, "OC"},
{"IcyWaters", Water, Sea, Ice, "IW"},

{"OpenOcean", Water, Ocean, NoFeature, "OO"},
{"Glacier", Water, Ocean, Ice, "GC"},
{"MidOceanRidge", Water, Ocean, Peak, "MR"},
{"UnderwaterVent", Water, Ocean, Lava, "UV"},

};