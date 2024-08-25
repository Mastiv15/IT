#pragma once
#include <iostream>
#include <string>
#include "Forest.h"

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

	friend void Forest::growUp(const Tree& nameTree);
	//friend Forest Forest::operator+(const Tree& other);

	
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
	*	std::cout << m_id << std::endl;
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

	static int getCounterTree();
	static void increaseCounterTree();
	static void decreaseCounterTree();


	~Tree();
	
private:
		
	Trees m_nameTree;
	int m_id;
	int* m_params;
	static int m_counter;
		
};





