#pragma once
#include <iostream>
#include <string>
#include <vector>

/*������ ��������� ����
			<typename T> ���������, ��� � ������� ����� �������������� ����������� ��� ������
						� ���, ��� ���������� ����� � (��� ����������� ����������)
						����� ��������� �� ��� ��� ������.*/
template <typename T>
class STO
{

public:

	/*������ ����� � ����� std::vector (������ private ����)
	 ��� ���������� � ���� ����� ������ ( � ������ ������ ������ �� ����� �� ����� 5)
	 �.�. �������� "��� �������".size() ����� ������ ������� < 5.�.�. ����� ������� ���������� � 0-�,
	  �� 0,1,2,3,4 - ������ ����� 5
	  const T& cars - T - ����������� ���������� ���� ������, ������� �������� ����� ���������� �������� ��� class-a (Trucks)
	  ,������� ����� ��������� (����� &) �� ������ (������ �� class-a Trucks), */
	void addCar(const T& cars) {
		
		//����� ������ ������� 5
		if ( _cars.size() < 5 )
		{
			/*�������� �������� "���".push_back() � ����� ������� ������� std::vector<T> _cars
			  <T> - ��� ������ ����� ������ �� Trucks*/
			_cars.push_back(cars);
		}
		else
		{
			//�������� ��������� ������������ STO, ���� ������ 5 �����
			std::cout << "Sorry STO is full! STO for 5 cars! " << std::endl;
			
		}
	}

	/*������ ����������� ������ �� �����
	������������ ����� ����	*/
	void printAll()
	{		
			std::cout << "Cars STO : " << std::endl;
			//������ ���������� cars, ������� ���������� �������� _cars - ����������� ��������� ������� vector
			for (const auto& cars : _cars)
			{
				/*��� ������ ���������� ������� getName ������ ����� ����� class - a
				 PassengerCars � Trucks*/
				std::cout << cars.getName() << std::endl;
			}
			std::cout << std::endl;
				
	}

	/*������ ������ �� ������� �������, ��� ������������ ������ �������� "��� ����� ������".clear()*/
	void RepairAll()
	{
		_cars.clear();
		std::cout << "Repair all cars " << std::endl;
	}

	//����������. ������ ��������� ��������� ������� �������
	~STO()
	{
		std::cout << "Destructor is working"<< std::endl;
	}
	
			
private:
	//������ ��������� ���� ������ vector <T> ��� ���� ������� �������
	std::vector <T> _cars;
};

