#include <iostream>
#include "hw4.h"


int main()
{
    welkomeText();

    //принимаем и присваиваем переменню от пользователя как value
    int value = getValue();

    //сравниваем условия, выполняем операцию побитового сдвига, в зависемости от заданных условий
    //выводим результат на экран
    getResult(value);
}
