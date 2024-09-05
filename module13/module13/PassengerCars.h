#pragma once
#include <string>
#include <iostream>

enum class MyPassengerCars
{	
	passengerTesla,
	passengerBMW,
};


class PassengerCars
{
public:

	PassengerCars(MyPassengerCars namePassCars, std::string weight);
	std::string getNamePassCars() const;
	
	void print();

	~PassengerCars();
	
	int increacePassCounter();
	int getPassCounter();
	

private:
	static int _countPass;
	MyPassengerCars _namePassCars;
	std::string _weight;
};

