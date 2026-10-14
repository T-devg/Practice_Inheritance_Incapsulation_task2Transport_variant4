//
// Created by Ольга on 14.10.2026.
//

#ifndef PRACTICE_INHERITANCE_INCAPSULATION_TASK2TRANSPORT_VARIANT4_TRANSPORT_H
#define PRACTICE_INHERITANCE_INCAPSULATION_TASK2TRANSPORT_VARIANT4_TRANSPORT_H
#include <string>
#include <iostream>
using namespace std;
class Transport{
    float average_speed;
    int year;
    string fuel;
public:
    Transport(float avg_speed, int year, string fuel);

     float getSpeed();
     int getYear();
     string getFuelType();

    void showTransport();
};


#endif //PRACTICE_INHERITANCE_INCAPSULATION_TASK2TRANSPORT_VARIANT4_TRANSPORT_H
