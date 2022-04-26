//
// Created by bicho on 13.04.2022.
//
#include "hw.h"

double Property::tax() {
    return worth;
}
Property::Property(double w) {
    worth = w;
}

double Apartment::tax() {
    return worth/1000;
}
Apartment::Apartment(double w) : Property(w) {}

double Car::tax() {
    return worth/200;
}
Car::Car(double w) : Property(w){}

double CountryHouse::tax() {
    return worth/500;
}
CountryHouse::CountryHouse(double w) : Property(w){}