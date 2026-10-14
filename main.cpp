#include <iostream>
#include "Transport.h"
#include "Car.h"
#include "Train.h"
int main() {
    cout << "==================CAR===================" << endl;
    Car FordFocus("AX1234", "Ford", 100,2010,"Petrol");
    FordFocus.showCar();

    cout << "==================TRAIN==================" << endl;
    Train UkrZalinitsya("AX2345",200,
        20,200,2020, "Diesel" );
    UkrZalinitsya.showTrain();
    return 0;
}