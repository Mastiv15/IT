#include <iostream>
#include <string>
#include "tree.h"


int Tree::m_counter = 0;


Tree::Tree(Trees m_nameTree)
{
	this->m_nameTree = m_nameTree;
	++m_counter;
	m_id = m_counter;
	m_params = new int[100];
}
	

 Tree::Tree(const Tree& other)
{
	this->m_nameTree = other.m_nameTree;
	m_params = new int[100];
	memcpy(m_params, other.m_params, 100 * sizeof(int));
	
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
	return m_id;
}

void Tree::wind(Tree &Tree)
{
	/*std::cout << m_nameTree << "  ID : " << m_id << std::endl;*/
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

Tree::~Tree()
{
	std::cout << "I clear the used memory at the end of the program pointer " << this << std::endl;
	delete[] m_params;
}


