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

/*сделал friend метод для class - а Tree
Forest Forest::operator+(const Tree& other)
{
		
	return Forest(getNameTree() + other.getNameTree());
}*/

/*	как я понял задачу, нужно было вырастить гибриды деревьев в
	class-е Forest при помощи функции growUp(), перетащив типы деревьев из class-а Tree

	вот идея перегрузки оператора сложения */

Forest::~Forest()
{
	Forest::decreaseCounterForestTree();
	std::cout << "Cut down all the trees in the forest"<<this<< std::endl;
	
}

/*создал отдельный счётчик
для деревьев посаженых в лесу*/
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




