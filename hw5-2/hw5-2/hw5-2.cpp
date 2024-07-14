#include <iostream>
#include "hw5-2.h"

//переключение между 1ой и 2ой частью задачи
//#define PART1



int main()
{
#ifdef PART1

	int shape = shapes::shapeForm();

#else

	int shape2 = shapes::shapeStr();

#endif

	shapes::printShape(/*shape |*/ shape2);
}

