#include <iostream>
#include <vector>
#include "Header.h"
#define fistpart


int main()
{
#ifdef fistpart
    const int size = 10;
    int array[size];

    
    std::cout << " Enter 10 values : ";
    //заполняем элементы массива
    fillArray(array, size);

    std::cout << " You values is : ";
    //выводим на экран элементы массива
    printArray(array, size);
#else // end fistpart

    //вводим размер массива с клавиатуры
    const int size = enterSize();
    
    //присваиваем размер массива вектору
    std::vector<int> array[size];

    //вводим элементы массива
    vec_array (array,size);

    //подчищаем свободную память, что бы не весела в воздухе
    array.shrink_ti_fit();

    //выводим на экран элементы массива
    printVec_array (array,size);

#endif
  return 0;
}







