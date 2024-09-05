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

	//������ ���� ����������� ������. ������.
	PassengerCars(MyPassengerCars namePassCars, std::string weight);
	std::string getName() const;
	
	void print();
		
	int increacePassCounter();
	int getPassCounter();
	
private:
	static int _countPass;

	/*������ ���� ����������� ��� class PassengerCars
	  � ����������� ���� MyPassengerCars (enum class - ������ ���� private)
						 std::string*/
	MyPassengerCars _namePassCars;
	std::string _weight;
};

