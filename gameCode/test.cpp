#include "settings.h"
#include "bottomLevel\terrain.h"
#include "bottomLevel\map.h"
#include "bottomLevel\display.h"

int main(int argc, char const *argv[])
{
    X_MapSize = 100;
    Y_MapSize = 100;
    
    displayMap(0,0);

    return 0;
}