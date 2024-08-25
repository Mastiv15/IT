﻿#include <iostream>
#include <string>
#include "tree.h"
#include "Forest.h"

/*enum class Trees
{
	UNKNOW = -1,
	BIRCH,
	OAK,
	MAPLE,
	SPRUCE
};

class Tree
{
public:

	static int m_counter;

	Tree (Trees m_nameTree)
	{
		this->m_nameTree = m_nameTree;
		m_counter++;
		m_id = m_counter;
	}

	Tree(const Tree& other)
	{
		this->m_nameTree = other.m_nameTree;
	}

	void setNameTree(Trees m_nameTree)
	{
		this->m_nameTree = m_nameTree;
		
	}

	Trees getNameTree() const
	{
		return m_nameTree;
		
	}

	int getId()
	{
		return m_id;
	}
		
	void wind()
	{
		switch (m_nameTree)
		{
		case (Trees::UNKNOW):
			std::cout << "You haven't chosen is anything! " << std::endl;
			break;
		case Trees::BIRCH:
			std::cout << "You have chosen : BIRCH " << "\t ID : " << m_id << std::endl;
			break;
		case Trees::OAK:
			std::cout << "You have chosen : OAK " << "\t\t ID : " << m_id << std::endl;
			break;
		case Trees::MAPLE:
			std::cout << "You have chosen : MAPLE " << "\t ID : " << m_id << std::endl;
			break;
		case Trees::SPRUCE:
			std::cout << "You have chosen : SPRUCE " << "\t ID : " << m_id << std::endl;
			break;
		}
	}

	~Tree()
	{
		std::cout << "I clear the used memory at the end of the program " << std::endl;
	}

private:
	
	Trees  m_nameTree;
	int m_id;
};*/


int main()
{
	/* в деструкторе проверил, что бы удалялся
	конструктор класса, и конструктор копирования*/
	
		Tree tree(Trees::BIRCH);
		/*Tree tree("BIRCH");
		Tree copy_tree1(tree);
		tree.wind(copy_tree1);*/
		tree.wind(tree);


		Tree tree2(Trees::OAK);
		/*Tree tree2("OAK");
		Tree copy_tree2(tree2);
		tree2.wind(copy_tree2);*/
		tree2.wind(tree2);


		Tree tree3(Trees::MAPLE);
		/*Tree tree3("MAPLE");
		Tree copy_tree3(tree3);
		tree3.wind(copy_tree3);*/
		tree3.wind(tree3);

		
		Tree tree4(Trees::SPRUCE);
		/*Tree tree4("SPRUCE");
		Tree copy_tree4(tree4);
		tree4.wind(copy_tree4);*/
		tree4.wind(tree4);

		std::cout << std::endl;

		{
			/* передаём объекты класса Tree в метод class-а Forest при помощи метода growUp()
				счётчик созданных деревьев в class-е Tree*/
			Forest treeForest;
			treeForest.growUp(tree);

			Forest treeForest2;
			treeForest2.growUp(tree2);

			Forest treeForest3;
			treeForest3.growUp(tree3);

			Forest treeForest4;
			treeForest4.growUp(tree4);

			std::cout << "\n" << "Number of trees in the forest : " << Forest::getCounterForestTree() << "\n" << std::endl;
		}
				
	std::cout << "\n" << "Number of trees in the forest : " << Forest::getCounterForestTree() << "\n" << std::endl;
	
	std::cout << "New Forest" << std::endl;

	
	return 0;
	
}

