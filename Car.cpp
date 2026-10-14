//
// Created by Ольга on 14.10.2026.
//

#include "Car.h"

Car::Car(string number, string brand, float avg_speed, int year, string fuel)
:Transport(avg_speed,year,fuel) {
    this->number=number;
    this->brand=brand;
}

string Car::getNumber() {
    return number;
}

string Car::getBrand() {
    return brand;
}

void Car::setNumber(string number) {
    this->number = number;
    cout << "Number changed: " << number << endl;
}

void Car::showCar() {
    cout << "Number: " << number << endl;
    cout << "Brand: " << brand << endl;
    Transport::showTransport();
    cout << endl;
}
