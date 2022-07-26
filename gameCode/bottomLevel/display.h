#include <iostream>
#include <iomanip>

#include "../settings.h"
#include "map.h"

#ifndef DISPLAY_H
#define DISPLAY_H


void displayLineSplitter();

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
            std::string tile1 = "|      |";
            
            std::cout << tile1;
        }
        std::cout << std::endl;

        std::cout << std::setw(6) << std::left;
        std::cout << i;

        for (size_t j = 0; j < X_DisplaySize; ++j)
        {
            std::string tile2 = "|      |";
            
            std::cout << tile2;
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

#endif