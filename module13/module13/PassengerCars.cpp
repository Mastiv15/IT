#include "PassengerCars.h"
#include <iostream>

int PassengerCars::_countPass = 0;

PassengerCars::PassengerCars(MyPassengerCars namePassCars, std::string weight):_namePassCars(namePassCars), _weight(weight)
{
	increacePassCounter();
}

std::string PassengerCars::getNamePassCars() const
{
	switch (_namePassCars)
	{
	
	case MyPassengerCars::passengerTesla:
		return "Passenger Tesla";

	case MyPassengerCars::passengerBMW:
		return "Passenger BMW";

	default: return "Unknown";
		
	}
};

void PassengerCars::print()
{
	std::cout << getNamePassCars() << " counter for passenger cars : " << getPassCounter()
		<< "\nWeight in a car : " << _weight << std::endl;
}

int PassengerCars::increacePassCounter()
{
	return ++_countPass;
}

int PassengerCars::getPassCounter() {
	return	_countPass;
}

PassengerCars::~PassengerCars()
{
	std::cout << "Work destructor "
		<< getNamePassCars() << std::endl;
}
