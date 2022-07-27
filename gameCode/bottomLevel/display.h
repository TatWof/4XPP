#include <iostream>
#include <iomanip>

#include "../settings.h"
#include "map.h"
#include "building.cpp"
#include "unit.cpp"
#include "faction.cpp"

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
    for (size_t j = 0; j < X_DisplaySize; ++j)
    {
        std::cout << std::setw(8) << std::left;
        std::cout << X_DisplayOrigin + j;
    }
    std::cout << std::endl;
    
    std::cout << "      ";
    for (size_t j = 0; j < X_DisplaySize; ++j)
    {
        std::cout << std::setw(8) << std::left;
        std::cout << j;
    }
    std::cout << std::endl;
    
    displayLineSplitter();

    for (size_t i = 0; i < Y_DisplaySize; ++i)
    {
        std::cout << std::setw(6) << std::left;
        std::cout << Y_DisplayOrigin + i;
        
        for (size_t j = 0; j < X_DisplaySize; ++j)
        {
            std::cout << "|";
            displayTerrainKey(j, i);
            displayResourceKey(j, i);
            displayUnitKey(j, i);
            std::cout << "|";
        }
        std::cout << std::endl;

        std::cout << std::setw(6) << std::left;
        std::cout << i;

        for (size_t j = 0; j < X_DisplaySize; ++j)
        {
            std::cout << "|";
            displayBuildingKey(j, i);
            std::cout << "  ";
            displayTerritoryKey(j, i);
            std::cout << "|";
        }
        std::cout << std::endl;

        displayLineSplitter();
    }
    
}

void displayLineSplitter()
{
    std::cout << "      ";
    for (size_t i = 0; i < X_DisplaySize; ++i)
    {
        std::cout << "========";
    }
    std::cout << std::endl;
}

void displayTerrainKey(int X, int Y)
{
    std::cout << std::setw(2) << std::left;
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
    if (map[X][Y].building == buildings[0]) {std::cout << "  ";}
    else 
    {
        std::cout << std::setw(2) << std::left;
        std::cout << map[X][Y].building.key;
    }
}
void displayTerritoryKey(int X, int Y)
{
    if (map[X][Y].ownership == factions[0]) {std::cout << "  ";}
    else {std::cout << map[X][Y].ownership.key << 'X';}
    
}

#endif