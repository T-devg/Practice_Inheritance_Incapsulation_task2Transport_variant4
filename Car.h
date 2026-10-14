//
// Created by Ольга on 14.10.2026.
//

#ifndef PRACTICE_INHERITANCE_INCAPSULATION_TASK2TRANSPORT_VARIANT4_CAR_H
#define PRACTICE_INHERITANCE_INCAPSULATION_TASK2TRANSPORT_VARIANT4_CAR_H
#include "Transport.h"

class Car:public Transport  {
    string number;
    string brand;

public:
    Car(string number, string brand, float avg_speed, int year, string fuel);

    string getNumber();
    string getBrand();

    void setNumber(string number);

    void showCar();
};


#endif //PRACTICE_INHERITANCE_INCAPSULATION_TASK2TRANSPORT_VARIANT4_CAR_H
