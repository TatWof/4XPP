#include <ostream>

#include "faction.h"

#ifndef UNIT_H
#define UNIT_H

enum baseUnitType{baseInvalidUnit = 0, noUnitType = 1, MeleeLand = 2, RangedLand = 3, MeleeWater = 4, RangedWater = 5};

struct Unit
{
    std::string name;
    char key;
    baseUnitType unitType;
    int range;
    Faction faction;

    Unit(std::string name, baseUnitType unitType, char key)
    {
        this->name = name;
        this->key = key;
        this->unitType = unitType;
    }

    void setFaction(Faction faction)
    {
        this->faction = faction;
    }

    bool operator==(Unit compare)
    {
        if (name == compare.name && unitType == compare.unitType) return true;
        else if(unitType == baseInvalidUnit) return true;
        else return false;
    }
    
    void operator=(Unit compare)
    {
        name = compare.name;
        key = compare.key;
        unitType = compare.unitType;
        range = compare.range;
        faction = compare.faction;
    }
};

std::ostream& operator<<(std::ostream& out, Unit u)
{
    out << u.name;
    return out;
}

#endif