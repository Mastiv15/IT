#include "Trucks.h"
#include <iostream>
#include <string>

int Trucks::_countTruck = 0;

Trucks::Trucks(MyTrucks nameTruckCar, std::string weight):_nameTrucksCar(nameTruckCar), _weight(weight)
{
	increaceTruckCounter();
}

void Trucks::print()
{
	std::cout << getNameTrucksCar() << " counter for trucks : "
		<< getTruckCounter() <<"\nWeight in a car : " << _weight << std::endl;
}

int Trucks::increaceTruckCounter()
{
	return ++_countTruck;
}

int Trucks::getTruckCounter()
{
	return _countTruck;
}

std::string Trucks::getNameTrucksCar() const
{
	switch (_nameTrucksCar)
	{
	case MyTrucks::truckMercedec:
		return "Truck Mercedec ";

	case MyTrucks::truckVolvo:
		return "Truck Volvo";

	default: return "Unknown";
	}
}

Trucks::~Trucks()
{
	std::cout << "Work destructor "
		<< getNameTrucksCar() << std::endl;
}
