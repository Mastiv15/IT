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
    //��� ���������� ������� ������ ��������� ����� ����� �� 2 ����
    //���� ������� �� �������, ������ ��������� ����� ������ �� 2 ����
    (value % 2 == 0 && value >= 0) ?
        std::cout << "\n" << value << " it's even and positive number, then you code is : " << (value << 2) :
        std::cout << "\n" << value << " it's not even or negative number, then you code is : " << (value >> 2);

    return 0;
}