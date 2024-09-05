#pragma once
#include <iostream>
#include <string>
#include <vector>

/*Создаю шаблонынй клас
			<typename T> указывает, что в шаблоне будет использоваться неизвестный тип данных
						и там, гже обозначена буква Т (имя неизвестной переменной)
						будет заменятся на наш тип данных.*/
template <typename T>
class STO
{

public:

	/*создаю метод с типом std::vector (смотри private поле)
	 для добавления в него своих данных ( в данном случае список из машин не более 5)
	 т.е. командой "имя объекта".size() задаю размер массива < 5.Т.к. члены массива номеруются с 0-я,
	  то 0,1,2,3,4 - размер будет 5
	  const T& cars - T - обозначение шаблонного типа данных, заместо которого будет подставлен например имя class-a (Trucks)
	  ,который будет ссылаться (через &) на объект (объект из class-a Trucks), */
	void addCar(const T& cars) {
		
		//задаю размер массива 5
		if ( _cars.size() < 5 )
		{
			/*добавляю командой "имя".push_back() в конец массива вектора std::vector<T> _cars
			  <T> - тип данных будет заменён на Trucks*/
			_cars.push_back(cars);
		}
		else
		{
			//командой показываю переполнение STO, если больше 5 машин
			std::cout << "Sorry STO is full! STO for 5 cars! " << std::endl;
			
		}
	}

	/*вывожу добавленные машины на экран
	пользователю через цикл	*/
	void printAll()
	{		
			std::cout << "Cars STO : " << std::endl;
			//создаю переменную cars, которой присваиваю значение _cars - добавленных элементов массива vector
			for (const auto& cars : _cars)
			{
				/*при помощи перегрузки функции getName вывожу имена машин class - a
				 PassengerCars и Trucks*/
				std::cout << cars.getName() << std::endl;
			}
			std::cout << std::endl;
				
	}

	/*удаляю ссылки на объекты классов, для освобождения памяти командой "имя члена класса".clear()*/
	void RepairAll()
	{
		_cars.clear();
		std::cout << "Repair all cars " << std::endl;
	}

	//деструктор. Поидее подчищает созданные шаблоны классов
	~STO()
	{
		std::cout << "Destructor is working"<< std::endl;
	}
	
			
private:
	//создаю шаблонный член класса vector <T> где буду хранить объекты
	std::vector <T> _cars;
};

