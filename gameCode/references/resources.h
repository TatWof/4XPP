#include "../baseStructs/resource.h"

#ifndef RESOURCES_H
#define RESOURCES_H

Resource resources[]
{
{"NoResource", noResourceType, ' '},
{"InvalidResource", baseInvalidResource, ' '},
{"Wood", Construction, 'W'},
{"Stone", Construction, 'S'},
{"Gold", Gold, 'G'},
{"Cotton", Luxury, 'C'},
{"Horse", Strategtic, 'H'},
{"Iron", Strategtic, 'H'},
{"NoResource", noResourceType, ' '},
{"Wool", Luxury, ' '}
};

#endif