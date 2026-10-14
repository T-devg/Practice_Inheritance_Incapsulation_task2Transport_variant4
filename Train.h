//
// Created by Ольга on 14.10.2026.
//

#ifndef PRACTICE_INHERITANCE_INCAPSULATION_TASK2TRANSPORT_VARIANT4_TRAIN_H
#define PRACTICE_INHERITANCE_INCAPSULATION_TASK2TRANSPORT_VARIANT4_TRAIN_H
#include "Transport.h"

class Train:public Transport{
    string number;
    int seats_amount;
    int carriage_amount;
public:
    Train(string number,int seats_amount,int carriage_amount,
        float avg_speed, int year, string fuel);

    string getNumber();
    int getSeats();
    int getCarriage();

    void setNumber(string number);

    void showTrain();
};


#endif //PRACTICE_INHERITANCE_INCAPSULATION_TASK2TRANSPORT_VARIANT4_TRAIN_H
