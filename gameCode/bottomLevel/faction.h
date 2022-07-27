#include <ostream>

#ifndef FACTION_H
#define FACTION_H

struct Faction
{
    std::string name;
    char key;
    bool isAI;

    Faction()
    {
        name = "Placeholder";
        key = 0;
    }
    Faction(std::string name, char key)
    {
        this->name = name;
        this->key = key;
        this->isAI = isAI;
    }
    
    bool operator==(Faction compare)
    {
        if (name == compare.name && key == compare.key) return true;
        else if (key == 0) return true;
        return false;
    }
    
    void operator=(Faction compare)
    {
        name = compare.name;
        key = compare.key;
    }
};

std::ostream& operator<<(std::ostream& out, Faction f)
{
    out << f.name;
    return out;
}

#endif