#pragma once
#include <string>
#include <iostream>
#include <vector>

enum class MyTrucks
{
	truckMercedec,
	truckVolvo,
};

class Trucks
{
public:

	Trucks(MyTrucks nameTruckCar, std::string weight);

	std::string getNameTrucksCar() const;

	void print();
	
	~Trucks();
	
	int increaceTruckCounter();
	int getTruckCounter();

private:
	static int _countTruck;
	MyTrucks _nameTrucksCar;
	std::string _weight;
};

