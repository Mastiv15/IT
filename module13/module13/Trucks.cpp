#include "Trucks.h"
#include <iostream>
#include <string>

int Trucks::_countTruck = 0;

//�������� ����������� ������ Trucks. ������ class-� Trucks
Trucks::Trucks(MyTrucks nameTruckCar, std::string weight):_nameTrucksCar(nameTruckCar), _weight(weight)
{
	increaceTruckCounter();
}

void Trucks::print()
{
	std::cout << getName() << " counter for trucks : "
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

/* ����� �������� switch ������� ��� ���������� */
std::string Trucks::getName() const
{
	switch (_nameTrucksCar)
	{
	case MyTrucks::truckMercedes:
		return "Truck Mercedes ";

	case MyTrucks::truckVolvo:
		return "Truck Volvo";

	default: return "Unknown";
	}
}
