#include <iostream>
#include "Book.h"
#include <string>


/*функция передаёт название книги в текстовом значении(std::string nameTitle - имя книги)
обязательно в скобках указывать параметр передоваемых значений*/ 

void Book::setM_title(std::string nameTitle)
{
	// задаём значение для m_title 
	m_title = nameTitle;
}

//возвращаем наше значение для дальнейшего его вывода
std::string Book::getM_title() const
{
	return m_title;
}

/*==========================================================================*/

void Book::setM_author(std::string nameAuthor)
{
	//идея была ещё сделать проверку на ввод букв для составления строки
	//что бы не было в имени только цифры ( Агент 007 допустимо)
	m_author = nameAuthor;
}

std::string Book::getM_author() const
{
	return m_author;
}

/*==========================================================================*/

void Book::setM_year(int valueYear)
{
	//проверка на осознанный возраст автора (адекватность автора)
	if (valueYear > 7 && valueYear < 131)
	{
		m_year = valueYear;
	}

	else
	{
		std::cout << " Incorrect age entered!";
	}
}

int Book::getM_year() const
{
	return m_year;
}