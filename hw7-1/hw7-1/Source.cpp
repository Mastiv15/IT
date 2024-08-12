#include "Header.h"
#include <iostream>
#include <vector>


void fillArray(int* array, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
}

void printArray(int* array, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << array[i] << " ";
    }
}

int enterSize()
{
    int size;
    std::cin >> size;

    return size;
}

int vec_array(int* array, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }

    return 0;
}

void printVec_array(int* array, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << array[i];
    }

}