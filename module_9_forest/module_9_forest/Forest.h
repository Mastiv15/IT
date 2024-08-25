#pragma once
#include <iostream>

class Tree;

class Forest
{
public:

	void growUp(const Tree& nameTree);

	//Forest operator+(const Tree& other);
	
	~Forest();

	
	static int getCounterForestTree();
	static void increaseCounterForestTree();
	static void decreaseCounterForestTree();
	
private:
	static int m_counterForestTree;
};
