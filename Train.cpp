//
// Created by Ольга on 14.10.2026.
//

#include "Train.h"

Train::Train(string number, int seats_amount, int carriage_amount,
    float avg_speed, int year, string fuel)
:Transport(avg_speed,year,fuel)
{
    this->number = number;
    this->seats_amount = seats_amount;
    this->carriage_amount = carriage_amount;
}

string Train::getNumber() {
    return number;
}

int Train::getSeats() {
    return seats_amount;
}

int Train::getCarriage() {
    return carriage_amount;
}

void Train::setNumber(string number) {
    this->number = number;
    cout << "Number changed: " << number << endl;
}

void Train::showTrain() {
    cout << "Number: " << number << endl;
    cout << "Seats amount: " << seats_amount << endl;
    cout << "Carriages amount: " << carriage_amount << endl;
    Transport::showTransport();
    cout << endl;
}
