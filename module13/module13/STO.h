#pragma once
#include <iostream>
#include <string>
#include <vector>
//#include "PassengerCars.h"
//#include "Trucks.h"



template <typename T>
class STO
{

public:

	void addCar(const T& cars) {
		_cars;
		++_counter;
		std::cout << "Cars at the STO : " << getCounter() << std::endl;
		if ( _counter > 5)
		{
			std::cout << " Sorry STO is full! " << std::endl;
		}
	}

	void RepairAll()
	{
		_cars.clear();
	}

	static int getCounter() {
		return _counter;
	}
			
private:
	std::vector <T> _cars;
	static int _counter;
};

template <typename T> 
int STO<T>::_counter = 0;