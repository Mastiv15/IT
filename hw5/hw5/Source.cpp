#include <iostream>
#include "hw5.h"
//����� - ������. ��������� ����������� ���������� �� enum class shape � printShape. ��� ������ ������ ��
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


	//����� shapes ����� ����� �����, � ��������� � �������� int, ����� ����� ��������������
	int shapeForm()
	{
		shape form = shape::FORMTYPE;
		int formInt = static_cast <int> (form);

		return formInt;
	}

	/*int shapeStr()
	{
		std::cout << " Enter one of the shapes : CIRCLE, SQUARE or TRIANG " << std::endl;
		std::string nameShape = " ";
		std::cin >> nameShape;


		return nameShape;
	}*/
	
	 

	int printShape(int formInt /*|| nameShape*/)
	{
		
		switch (formInt /*|| nameShape*/)
		{
		case (0 /*||nameShape*/):
			std::cout << "CIRCLE" << std::endl;
				break;
		case (1  /*|| nameShape*/):
			std::cout << "SQUARE" << std::endl;
				break;
		case (2  /*|| nameShape*/):
			std::cout << "TRIANG" << std::endl;
				break;
		}

		return 0;
	}
		
}