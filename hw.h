//
// Created by bicho on 13.04.2022.
//

#ifndef HW_9_HW_H
#define HW_9_HW_H

class Property{
protected: double worth;
public:
    Property(double w);
    virtual double tax();
    ~Property(){};

};

class Apartment : public Property {
public:
    Apartment(double w);
    double tax();
};

class Car : public Property {
public:
    Car(double w);
    double tax();
    ~Car();
};

class CountryHouse : public Property {
public:
    CountryHouse(double w);
    double tax();
    ~CountryHouse();
};

#endif //HW_9_HW_H
