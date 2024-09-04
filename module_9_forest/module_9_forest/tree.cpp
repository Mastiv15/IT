#include <iostream>
#include <string>
#include "tree.h"
#include "Forest.h"


/*декларируем счётчик m_counter расположенный в class-е Tree с типом int, 
	присваиваем ему значение = 0, т.к. подсчёт количества будет вестись с 1-ой единицы*/
int Tree::m_counter = 0;

/*создаём свой конструктор класса и описываем его
	Trees - enum class (выбираем из значений заданных пользователем)
	Tree - название метода (функции), обычно совпадает с названием класса (class Tree)*/
Tree::Tree(Trees m_nameTree)
{
	/*this - указывает на privet объект описанный в class-е Tree которому будем присваивать
			значение указанное в set-ре (сеттере)*/
	this->m_nameTree = m_nameTree;

	/*добавляем счётчик к созданию метода(функции) - счётчик создания объектов при помощи данного конструктора class-а
	++m_counter - прибавляем +1 к счётчику m_counter и присваиваем ему его (++ - оператор добавочного префикса)*/
	Tree::increaseCounterTree();

	/* m_id - присваиваем уникальный номер для каждого созданного
	объекта через счётчик m_counter*/
	m_id = m_counter;

	/*выделяем дополнительную память в "куче" для создания динамического массива при помощи команды new, 
		задаём тип - int
			[100] - задаём размер массива. */
	m_params = new int[100];
}
	
/* создание конструктора копирования
 для class Tree*/
 Tree::Tree(const Tree& other)
{
	this->m_nameTree = other.m_nameTree;
	m_params = new int[100];
	memcpy(m_params, other.m_params, 100 * sizeof(int));
	/*т.к.конструктор копирования, это тоже создание метода но основании
		оригинального метода, добавляем счётчик ++m_counter*/
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

/* выводим на экран 
полученные значения*/
void Tree::wind(Tree &Tree)
{
	/*при помощи множественного условного оператора switch */
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

