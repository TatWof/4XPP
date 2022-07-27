#ifndef RESOURCE_H
#define RESOURCE_H

Resource resources[]
{
{"Wood", Construction, 'W'},
{"Stone", Construction, 'S'},
{"Gold", Gold, 'G'},
{"Cotton", Luxury, 'C'},
{"Horse", Strategtic, 'H'},
{"Iron", Strategtic, 'H'},
{"NoResource", noResourceType, ' '},
{"InvalidResource", baseInvalidResource, ' '}
};

enum baseResourceType{baseInvalidResource = 0, noResourceType = 1, Gold = 2, Construction = 3, Luxury = 4, Strategtic = 5};

struct Resource
{
    std::string name;
    char key;
    baseResourceType resourceType;

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

    std::ostream& operator<<(std::ostream out, Resource r)
    {
        out << r.name;
        return out;
    }


#endif