//
// Created by Ольга on 14.10.2026.
//

#include "Transport.h"

Transport::Transport(float avg_speed, int year, string fuel) {
    average_speed = avg_speed;
    this->year = year;
    this->fuel = fuel;
}

float Transport::getSpeed() {
    return average_speed;
}

int Transport::getYear() {
    return year;
}

string Transport::getFuelType() {
    return fuel;
}

void Transport::showTransport() {
    cout << "Average speed: " << average_speed << endl;
    cout << "Creation year: " << year << endl;
    cout << "Fuel type: " << fuel << endl;

}
