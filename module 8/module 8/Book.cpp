#include <iostream>
#include "Book.h"
#include <string>


/*������� ������� �������� ����� � ��������� ��������(std::string nameTitle - ��� �����)
����������� � ������� ��������� �������� ������������ ��������*/ 

void Book::setM_title(std::string nameTitle)
{
	// ����� �������� ��� m_title 
	m_title = nameTitle;
}

//���������� ���� �������� ��� ����������� ��� ������
std::string Book::getM_title() const
{
	return m_title;
}

/*==========================================================================*/

void Book::setM_author(std::string nameAuthor)
{
	//���� ���� ��� ������� �������� �� ���� ���� ��� ����������� ������
	//��� �� �� ���� � ����� ������ ����� ( ����� 007 ���������)
	m_author = nameAuthor;
}

std::string Book::getM_author() const
{
	return m_author;
}

/*==========================================================================*/

void Book::setM_year(int valueYear)
{
	//�������� �� ���������� ������� ������ (������������ ������)
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