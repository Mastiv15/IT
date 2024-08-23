#include "Forest.h"
#include "Forest.h"
#include <iostream>
#include "tree.h"

Forest::Forest()
{

}


void Forest::growUp(const Tree& nameTree)
{
	std::cout << "A tree grew in the forest : " 
		<< static_cast<int>(nameTree.getNameTree()) << std::endl;

}


