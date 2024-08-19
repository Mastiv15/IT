#pragma once
#include <iostream>
#include <string>

//класс "Книга"
class Book
{
public:
	//декларируем функции
	//задаём имя книге 
	void setM_title(std::string nameTitle);
	std::string getM_title() const;

	//задаём имя автору
	void setM_author(std::string nameAuthor);
	std::string getM_author() const;

	//задаём возраст автору
	void setM_year(int valueYear);
	int getM_year() const;


	//ф-ция для вывода заданных значений
	void printInfo()
	{
		/*выводим значения m_title, m_author, m_year
		которым "выше" присвоили значения через сеттеры
		приватные переменные принимают значения от геттеров*/
		std::cout << " Name book : " << m_title << std::endl;
		std::cout << " Autor's name : " << m_author << std::endl;
		std::cout << " Autor's age : " << m_year << std::endl;
	}

private:

	std::string m_title;
	std::string m_author;
	int m_year;
};