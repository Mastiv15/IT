#pragma once
#include <iostream>
#include <string>
#include "Forest.h"

//class Forest;

enum class Trees
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

	//дружественный метод из класса Forest
	friend void growUp(const Tree& nameTree);

	static int m_counter;

		Tree(Trees /*std::string*/ m_nameTree);
	/*{
		this->m_nameTree = m_nameTree;
		m_counter++;
		m_id = m_counter;
	}*/

	Tree (const Tree& other);
	/*{
		this->m_nameTree = other.getNameTree();
		m_params = new int[100];
		memcpy(m_params, other.m_params, 100 * sizeof(int));
	}*/

	void setNameTree(Trees /*std::string*/ m_nameTree);
	/*{
		this->m_nameTree = m_nameTree;
		
	}*/

	Trees/*std::string*/ getNameTree() const;
	/*{
		return m_nameTree;
		
	}*/

	 int getId() const;
	/*{
		return m_id;
	}*/
		
	void wind(Tree &Tree);
	/*{
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
	}*/

	

	~Tree();
	/*{
		std::cout << "I clear the used memory at the end of the program " << std::endl;
		delete[] m_params;
	}*/


private:
		
	Trees /*std::string*/  m_nameTree;
	int m_id;
	int* m_params;
	
};

//int Tree::m_counter = 0;



