#include <iostream>
#include "hw4.h"

void welkomeText()
{
    std::cout << " Enter you number : ";
}

int getValue()
{
    int value;
    std::cin >> value;

    return value;
}

int getResult(int value)
{
    //при выполнении условий делаем побитовый сдвиг влево на 2 бита
    //если условия не приняты, делаем побитовый сдвиг вправо на 2 бита
    (value % 2 == 0 && value >= 0) ?
        std::cout << "\n" << value << " it's even and positive number, then you code is : " << (value << 2) :
        std::cout << "\n" << value << " it's not even or negative number, then you code is : " << (value >> 2);

    return 0;
}