#include <iostream>
#include "hw5-2.h"
//изменяем тип фигуры в функции shapeForm для первой части задания
#define FORMTYPE SQUARE 

namespace shapes
{
	enum class shape
	{
		Unknown = -1,
		CIRCLE = 0,
		SQUARE = 1,
		TRIANG = 2,
	};

	// делаем явное преобразование фигур в int
	int shapeForm()
	{
		shape form = shape::FORMTYPE;
		int formInt = static_cast <int> (form);

		return formInt;
	}
	//вводим фигуру и делаем явное преобразование фигур в int
	int shapeStr()
	{
		// Вводить БОЛЬШИМИ БУКВАМИ!!
		std::cout << " Enter your figure : CIRCLE, SQUARE or TRIANG" << std::endl;
			std::string nameForm = "  ";
			std::cin >> nameForm;

			int shapeStr = static_cast <int> (shape::Unknown);

			if (nameForm == "CIRCLE")
					shapeStr = static_cast <int> (shape::CIRCLE);

			if (nameForm == "SQUARE")
					shapeStr = static_cast <int> (shape::SQUARE);

			if (nameForm == "TRIANG")
				shapeStr = static_cast <int> (shape::TRIANG);

			else
				std::cout << " \t\tUnknow messege!" << std::endl;

			return shapeStr;

	}

	int printShape(int shape)
	{

		switch (shape)
		{
		case (0):
			std::cout << " you have chosen the form - CIRCLE\n\n" << std::endl;
			break;
		case (1):
			std::cout << " you have chosen the form - SQUARE\n\n" << std::endl;
			break;
		case (2):
			std::cout << " you have chosen the form - TRIANG\n\n" << std::endl;
			break;

		}

		return 0;
	}
}