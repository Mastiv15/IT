#include "Forest.h"
#include <iostream>
#include "tree.h"

int Forest::m_counterForestTree = 0;

void Forest::growUp(const Tree& nameTree)
{
	
	std::cout << "A tree grew in the forest (enum <int>) : " 
		<<static_cast<int>(nameTree.getNameTree())<< std::endl;

	Forest::increaseCounterForestTree();

}

/*������ friend ����� ��� class - � Tree
Forest Forest::operator+(const Tree& other)
{
		
	return Forest(getNameTree() + other.getNameTree());
}*/

/*	��� � ����� ������, ����� ���� ��������� ������� �������� �
	class-� Forest ��� ������ ������� growUp(), ��������� ���� �������� �� class-� Tree

	��� ���� ���������� ��������� �������� */

Forest::~Forest()
{
	Forest::decreaseCounterForestTree();
	std::cout << "Cut down all the trees in the forest"<<this<< std::endl;
	
}

/*������ ��������� �������
��� �������� ��������� � ����*/
int Forest::getCounterForestTree()
{
	return m_counterForestTree;
}

void Forest::increaseCounterForestTree()
{
	++m_counterForestTree;
}

void Forest::decreaseCounterForestTree()
{
	--m_counterForestTree;
}




