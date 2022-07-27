#include <ostream>

#ifndef RESOURCE_H
#define RESOURCE_H

enum baseResourceType{baseInvalidResource = 0, noResourceType = 1, Gold = 2, Construction = 3, Luxury = 4, Strategtic = 5};

struct Resource
{
    std::string name;
    char key;
    baseResourceType resourceType;

    Resource()
    {
        this->name = "InvalidResource";
        this->resourceType = baseInvalidResource;
        this->key = ' ';
    }
    Resource(std::string name, baseResourceType resourceType, char key)
    {
        this->name = name;
        this->resourceType = resourceType;
        this->key = key;
    }


    bool operator==(baseResourceType compare)
    {
        if (resourceType == compare) return true;
        
        return false;
    }
    bool operator==(Resource compare)
    {
        if (name == compare.name) return true;

        return false;
    }
};

    std::ostream& operator<<(std::ostream& out, Resource r)
    {
        out << r.name;
        return out;
    }


#endif