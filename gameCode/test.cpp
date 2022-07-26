#include "settings.h"
#include "bottomLevel\terrain.h"
#include "bottomLevel\display.h"

int main(int argc, char const *argv[])
{
    X_MapSize = 100;
    Y_MapSize = 100;
    
    displayMap(98,-1);

    return 0;
}