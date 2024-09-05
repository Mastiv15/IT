#pragma once
#include <string>
#include <iostream>

enum class MyPassengerCars
{	
	passengerTesla,
	passengerBMW,
	passengerAudi,
	passengerFord,
	passengerDodge,
	passengerHonda,

};


class PassengerCars
{
public:

	//создаю свой конструктор класса. Сеттер.
	PassengerCars(MyPassengerCars namePassCars, std::string weight);
	std::string getName() const;
	
	void print();
		
	int increacePassCounter();
	int getPassCounter();
	
private:
	static int _countPass;

	/*создаю свой конструктор для class PassengerCars
	  с параметрами типа MyPassengerCars (enum class - смотри поле private)
						 std::string*/
	MyPassengerCars _namePassCars;
	std::string _weight;
};

