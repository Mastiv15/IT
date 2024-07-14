#include <iostream>
#include "hw5.h"
//переключение между доп. функционалом 
#define PART1

int main()
{
#ifdef PART1
	//вводим переменную и задаём ей числовое значение из списка enum class shape
	int shape = shapes::shapeForm();
#else
	int shape = shapes::shapeStr();
#endif
	//выводим на экран заданное значение из списка enum class shape
	shapes::printShape(shape);

 }

