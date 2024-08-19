#pragma once
#include <iostream>
#include <string>

enum class Trees;
/* {
	UNKNOW = -1,
	BIRCH,
	OAK,
	MAPLE,
	SPRUCE
};*/


class Tree
{
public:

	static int m_counter;

	Tree(Trees m_nameTree);
	/*{
		this->m_nameTree = m_nameTree;
		m_counter++;
		m_id = m_counter;
	}*/

	void setNameTree(Trees m_nameTree);
	/*{
		this->m_nameTree = m_nameTree;
		
	}*/

	Trees getNameTree() const;
	//{
	//	return m_nameTree;
	//	
	//}

	int getId();
	/*{
		return m_id;
	}*/
		
	void wind();
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
	}*/

private:
	
	Trees  m_nameTree;
	int m_id;
};

int Tree::m_counter = 0;



