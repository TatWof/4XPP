#include <iostream>
#include <iomanip>

#include "../settings.h"
#include "../baseStructs/map.h"
#include "../references/buildings.h"
#include "../references/units.h"
#include "../references/factions.h"

#ifndef DISPLAY_H
#define DISPLAY_H


void displayLineSplitter();
void displayMap(int X_DisplayOrigin, int Y_DisplayOrigin);
void displayTerrainKey(int X, int Y);
void displayResourceKey(int X, int Y);
void displayUnitKey(int X, int Y);
void displayBuildingKey(int X, int Y);
void displayTerritoryKey(int X, int Y);

void displayMap(int X_DisplayOrigin, int Y_DisplayOrigin)
{
    X_DisplayOrigin = (X_DisplayOrigin < 0) ? 0 : X_DisplayOrigin;
    Y_DisplayOrigin = (Y_DisplayOrigin < 0) ? 0 : Y_DisplayOrigin;
    
    X_DisplayOrigin = (X_DisplayOrigin > (X_MapSize - X_DisplaySize)) ? (X_MapSize - X_DisplaySize) : X_DisplayOrigin;
    Y_DisplayOrigin = (Y_DisplayOrigin > (Y_MapSize - Y_DisplaySize)) ? (Y_MapSize - Y_DisplaySize) : Y_DisplayOrigin;

    std::cout << "      ";
    for (size_t X_Displacement = 0; X_Displacement < X_DisplaySize; ++X_Displacement)
    {
        std::cout << std::setw(7) << std::left;
        std::cout << X_DisplayOrigin + X_Displacement;
    }
    std::cout << std::endl;
    
    std::cout << "      ";
    for (size_t X_Displacement = 0; X_Displacement < X_DisplaySize; ++X_Displacement)
    {
        std::cout << "~";
        std::cout << std::setw(6) << std::left;
        std::cout << X_Displacement;
    }
    std::cout << std::endl;
    
    displayLineSplitter();

    for (size_t Y_Displacement = 0; Y_Displacement < Y_DisplaySize; ++Y_Displacement)
    {
        std::cout << std::setw(6) << std::left;
        std::cout << Y_DisplayOrigin + Y_Displacement;
        
        for (size_t X_Displacement = 0; X_Displacement < X_DisplaySize; ++X_Displacement)
        {
            std::cout << "║";
            displayTerrainKey(X_DisplayOrigin + X_Displacement, Y_DisplayOrigin + Y_Displacement);
            displayResourceKey(X_DisplayOrigin + X_Displacement, Y_DisplayOrigin + Y_Displacement);
            displayUnitKey(X_DisplayOrigin + X_Displacement, Y_DisplayOrigin + Y_Displacement);

        }
        std::cout << "║" << std::endl;

        std::cout << "~";
        std::cout << std::setw(5) << std::left;
        std::cout << Y_Displacement;

        for (size_t X_Displacement = 0; X_Displacement < X_DisplaySize; ++X_Displacement)
        {
            std::cout << "║";
            displayBuildingKey(X_DisplayOrigin + X_Displacement, Y_DisplayOrigin + Y_Displacement);
            std::cout << "  ";
            displayTerritoryKey(X_DisplayOrigin + X_Displacement, Y_DisplayOrigin + Y_Displacement);
        }
        std::cout << "║" << std::endl;

        displayLineSplitter();
    }
    
}

void displayLineSplitter()
{
    std::cout << "      ";
    for (size_t X_Displacement = 0; X_Displacement < X_DisplaySize; ++X_Displacement)
    {
        std::cout << "╬══════";
    }
    std::cout << "╬" << std::endl;
}

void displayTerrainKey(int X, int Y)
{
    std::cout << map[X][Y].terrain.key;
}
void displayResourceKey(int X, int Y)
{
    std::cout << std::setw(2) << std::left;
    std::cout << map[X][Y].resource.key;
}
void displayUnitKey(int X, int Y)
{
    if (map[X][Y].unit == units[0]) {std::cout << "  ";}
    else {std::cout << map[X][Y].unit.faction.key << map[X][Y].unit.key;}
}
void displayBuildingKey(int X, int Y)
{
    std::cout << map[X][Y].building.key;
}
void displayTerritoryKey(int X, int Y)
{
    if (map[X][Y].ownership == factions[0]) {std::cout << "  ";}
    else {std::cout << map[X][Y].ownership.key << 'X';}
    
}

#endif