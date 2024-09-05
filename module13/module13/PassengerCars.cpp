#include "PassengerCars.h"
#include <iostream>

int PassengerCars::_countPass = 0;

PassengerCars::PassengerCars(MyPassengerCars namePassCars, std::string weight):_namePassCars(namePassCars), _weight(weight)
{
	increacePassCounter();
}

/* через оператор switch получаю имя автомобиля */
std::string PassengerCars::getName() const
{
	switch (_namePassCars)
	{
	case MyPassengerCars::passengerTesla:
		return "Passenger Tesla" ;
	case MyPassengerCars::passengerBMW:
		return "Passenger BMW";
	case MyPassengerCars::passengerAudi:
		return "Passenger Audi";
	case MyPassengerCars::passengerFord:
		return "Passenger Ford";
	case MyPassengerCars::passengerDodge:
		return "Passenger Dodge";
	case MyPassengerCars::passengerHonda:
		return "Passenger Honda";
	default: return "Unknown";
		
	}

};

void PassengerCars::print() 
{
	std::cout << getName() << " counter for passenger cars : " << getPassCounter()
		<< "\nWeight in a car : " << _weight << std::endl;
}

int PassengerCars::increacePassCounter()
{
	return ++_countPass;
}

int PassengerCars::getPassCounter() {
	return	_countPass;
}

