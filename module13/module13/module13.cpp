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

    STO <PassengerCars> stoCar1;
    stoCar1.addCar(passCar1);

    STO <PassengerCars> stoCar2;
    stoCar2.addCar(passCar2);

    STO <Trucks> stoCar3;
    stoCar3.addCar(truckCar1);

    STO <Trucks> stoCar4;
    stoCar4.addCar(truckCar2);
}

