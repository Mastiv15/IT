#include <iostream>
#include "PassengerCars.h"
#include <string>
#include "Trucks.h"
#include "STO.h"

int main()
{
    /*Создал 6 объектов легковых автомобилей
    для class PassengerCars*/
    PassengerCars passCar1(MyPassengerCars::passengerBMW, " Weight : 7 tons");
    passCar1.print();
    std::cout << std::endl;

    PassengerCars passCar2(MyPassengerCars::passengerTesla," Weight : 3 tons" );
    passCar2.print();
    std::cout << std::endl;

    PassengerCars passCar3(MyPassengerCars::passengerAudi, " Weight : 5 tons");
    passCar3.print();
    std::cout << std::endl;

    PassengerCars passCar4(MyPassengerCars::passengerDodge, " Weight : 4 tons");
    passCar4.print();
    std::cout << std::endl;

    PassengerCars passCar5(MyPassengerCars::passengerFord, " Weight : 4.5 tons");
    passCar5.print();
    std::cout << std::endl;

    PassengerCars passCar6(MyPassengerCars::passengerHonda, " Weight : 6 tons");
    passCar6.print();
    std::cout << std::endl;

    /* Создал 2 объекта грузовых автомобилей
        для class Truck */
    Trucks truckCar1(MyTrucks::truckMercedes, " Weight : 32 tons");
    truckCar1.print();
    std::cout << std::endl;

    Trucks truckCar2(MyTrucks::truckVolvo, " Weight : 27 tons");
    truckCar2.print();
    std::cout << std::endl;

    /*Добавил в template (шаблонный) class STO 6 объектов из
        class PassengerCars. Добавил в массив std::vector при помощи команды push_back()*/
    STO <PassengerCars> stoPassCar;
    stoPassCar.addCar(passCar1);
    stoPassCar.addCar(passCar2);
    stoPassCar.addCar(passCar3);
    stoPassCar.addCar(passCar4);
    stoPassCar.addCar(passCar5);

    /*добавил 6-ое авто, для проверки работы программы.
      Размер vector-а установил на 4. (но элементов будет 5, подсчёт с 0-я)  */
    stoPassCar.addCar(passCar6);

    /*вывожу добавленные авто на экран, должно вывести только 5 машин ( вместимость vector = 5)
    passCar6 не должно вывести на экран, но напишет сообщение, что STO заполнено
     */
    stoPassCar.printAll();   

    stoPassCar.RepairAll();     // очищаю ссылки на объекты из class PassengerCars
    std::cout << std::endl;

    /* Аналогично, добавляю ровно 5 машин*/
    STO <Trucks> stoTrucks;
    stoTrucks.addCar(truckCar1);
    stoTrucks.addCar(truckCar1);
    stoTrucks.addCar(truckCar1);
    stoTrucks.addCar(truckCar2);
    stoTrucks.addCar(truckCar2);

    /*проверяю, что бы машины были выведены на экран,
      а сообщение о полном STO выведено не будет*/
    stoTrucks.printAll();
    stoTrucks.RepairAll(); // очищаю ссылки на объекты из class Trucks
    std::cout << std::endl;

         
}

