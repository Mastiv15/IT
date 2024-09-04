#include <iostream>
#include <string>
#include "tree.h"
#include "Forest.h"


/*����������� ������� m_counter ������������� � class-� Tree � ����� int, 
	����������� ��� �������� = 0, �.�. ������� ���������� ����� ������� � 1-�� �������*/
int Tree::m_counter = 0;

/*������ ���� ����������� ������ � ��������� ���
	Trees - enum class (�������� �� �������� �������� �������������)
	Tree - �������� ������ (�������), ������ ��������� � ��������� ������ (class Tree)*/
Tree::Tree(Trees m_nameTree)
{
	/*this - ��������� �� privet ������ ��������� � class-� Tree �������� ����� �����������
			�������� ��������� � set-�� (�������)*/
	this->m_nameTree = m_nameTree;

	/*��������� ������� � �������� ������(�������) - ������� �������� �������� ��� ������ ������� ������������ class-�
	++m_counter - ���������� +1 � �������� m_counter � ����������� ��� ��� (++ - �������� ����������� ��������)*/
	Tree::increaseCounterTree();

	/* m_id - ����������� ���������� ����� ��� ������� ����������
	������� ����� ������� m_counter*/
	m_id = m_counter;

	/*�������� �������������� ������ � "����" ��� �������� ������������� ������� ��� ������ ������� new, 
		����� ��� - int
			[100] - ����� ������ �������. */
	m_params = new int[100];
}
	
/* �������� ������������ �����������
 ��� class Tree*/
 Tree::Tree(const Tree& other)
{
	this->m_nameTree = other.m_nameTree;
	m_params = new int[100];
	memcpy(m_params, other.m_params, 100 * sizeof(int));
	/*�.�.����������� �����������, ��� ���� �������� ������ �� ���������
		������������� ������, ��������� ������� ++m_counter*/
	++m_counter;
	m_id = m_counter;
	
}

void Tree::setNameTree(Trees m_nameTree)
{
	this->m_nameTree = m_nameTree;
}

Trees Tree::getNameTree() const
{
	return m_nameTree;
}

int Tree::getId() const
{
	/*std::cout << m_id << std::endl;*/
	return m_id;
}

/* ������� �� ����� 
���������� ��������*/
void Tree::wind(Tree &Tree)
{
	/*��� ������ �������������� ��������� ��������� switch */
	switch (/*m_nameTree*/Tree::getNameTree())
	{
	case (Trees::UNKNOW):
		std::cout << "You haven't chosen is anything! " << std::endl;
		break;
	case Trees::BIRCH:
		std::cout << "You have chosen : BIRCH " << "\t ID : " << Tree.getId() << std::endl;
		break;
	case Trees::OAK:
		std::cout << "You have chosen : OAK " << "\t\t ID : " << Tree.getId() << std::endl;
		break;
	case Trees::MAPLE:
		std::cout << "You have chosen : MAPLE " << "\t ID : " << Tree.getId() << std::endl;
		break;
	case Trees::SPRUCE:
		std::cout << "You have chosen : SPRUCE " << "\t ID : " << Tree.getId() << std::endl;
		break;
	}
}

Tree::~Tree()
{

	std::cout << "Destroying types of trees (enum <int>)" << static_cast<int>(Tree::getNameTree()) << std::endl;
	delete[] m_params;
	Tree::decreaseCounterTree();
}

int Tree::getCounterTree()
{
	return m_counter;
}

void Tree::increaseCounterTree()
{
	++m_counter;
}

void Tree::decreaseCounterTree()
{
	--m_counter;
}

