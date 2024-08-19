#pragma once
#include <iostream>
#include <string>

//����� "�����"
class Book
{
public:
	//����������� �������
	//����� ��� ����� 
	void setM_title(std::string nameTitle);
	std::string getM_title() const;

	//����� ��� ������
	void setM_author(std::string nameAuthor);
	std::string getM_author() const;

	//����� ������� ������
	void setM_year(int valueYear);
	int getM_year() const;


	//�-��� ��� ������ �������� ��������
	void printInfo()
	{
		/*������� �������� m_title, m_author, m_year
		������� "����" ��������� �������� ����� �������
		��������� ���������� ��������� �������� �� ��������*/
		std::cout << " Name book : " << m_title << std::endl;
		std::cout << " Autor's name : " << m_author << std::endl;
		std::cout << " Autor's age : " << m_year << std::endl;
	}

private:

	std::string m_title;
	std::string m_author;
	int m_year;
};