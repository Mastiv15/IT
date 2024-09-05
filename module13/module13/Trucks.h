#pragma once
#include <string>
#include <iostream>
#include <vector>

/*������ ���� enum class
   � ���������������� �������������*/
enum class MyTrucks
{
	truckMercedes,
	truckVolvo,
};

class Trucks
{
public:
	/*������ ���� ����������� ��� class Trucks
	  � ����������� ���� MyTrucks (enum class - ������ ���� private)
	                     std::string 
	*/
	Trucks(MyTrucks nameTruckCar, std::string weight);

	
	std::string getName() const;

	void print();
		
	// ������������� ������� ��� �����������
	int increaceTruckCounter();
	int getTruckCounter();

private:
	static int _countTruck;

	/*������ ���� ������ _nameTruckCar � ��������� ����������������� ����������
	  � enum class MyTrucks. ��� MyTrucks - ��� enum - ����� ����� ������*/
	MyTrucks _nameTrucksCar;
	std::string _weight;
};

