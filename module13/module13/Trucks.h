#pragma once
#include <string>
#include <iostream>
#include <vector>

/*создаю свой enum class
   с пользовательским перечислением*/
enum class MyTrucks
{
	truckMercedes,
	truckVolvo,
};

class Trucks
{
public:
	/*создаю свой конструктор для class Trucks
	  с параметрами типа MyTrucks (enum class - смотри поле private)
	                     std::string 
	*/
	Trucks(MyTrucks nameTruckCar, std::string weight);

	
	std::string getName() const;

	void print();
		
	// устранавливаю счётчик для автомобилей
	int increaceTruckCounter();
	int getTruckCounter();

private:
	static int _countTruck;

	/*создаю член класса _nameTruckCar с заданными пользовательскими значениями
	  в enum class MyTrucks. Где MyTrucks - имя enum - будет типом класса*/
	MyTrucks _nameTrucksCar;
	std::string _weight;
};

