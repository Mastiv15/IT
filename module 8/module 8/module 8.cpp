#include <iostream>
#include "Book.h"
#include <string>



int main()
{
    //создаём переменную bookInfo для класса Book
    Book bookInfo;

    //задаём значения private (приватным) переменным
     
    /*присваиваем имя книге, приватной переменной m_title
    через объект класса setM_title, который находится в public поле класса Book
    setM_title - является сеттером (дать значения)
    задаём в формате string*/
    bookInfo.setM_title (" Learning C++ at home ");

    /* аналогично строке 18 задаём имя автору для m_author 
       в формате string */
    bookInfo.setM_author (" Mikhail Sazonenka ");

    /* аналогично строкам 18 и 22 задаём значение для m_yer
     в формате int*/
    bookInfo.setM_year (33);

    /*объект для вывода значений на экран */
    bookInfo.printInfo();

    return 0;
}

