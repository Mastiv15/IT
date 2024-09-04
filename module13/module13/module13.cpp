#include <iostream>
#include "PassengerCars.h"
#include <string>
#include "Trucks.h"
#include "STO.h"

int main()
{
    PassengerCars passCar1(MyPassengerCars::passengerBMW, " Weight : 7 tons");
    passCar1.print();
    std::cout << std::endl;

    PassengerCars passCar2(MyPassengerCars::passengerTesla," Weight : 3 tons" );
    passCar2.print();
    std::cout << std::endl;

    Trucks truckCar1(MyTrucks::truckMercedec, " Weight : 32 tons");
    truckCar1.print();
    std::cout << std::endl;

    Trucks truckCar2(MyTrucks::truckVolvo, " Weight : 27 tons");
    truckCar2.print();
    std::cout << std::endl;

    STO <PassengerCars> stoPassCar;
    stoPassCar.addCar(passCar1);
    stoPassCar.addCar(passCar2);
    std::cout << std::endl;

    STO <Trucks> stoTrucks;
    stoTrucks.addCar(truckCar1);
    stoTrucks.addCar(truckCar2);
    std::cout << std::endl;

    stoPassCar.RepairAll();
    stoTrucks.RepairAll();
      
}

