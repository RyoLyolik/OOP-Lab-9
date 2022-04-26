#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include "hw.h"
using namespace std;

int main() {
    srand(time(nullptr));
    SetConsoleOutputCP(CP_UTF8);
    Property* m[7];
    m[0] = new Apartment(1111112);
    m[1] = new Apartment(2222222);
    m[2] = new Apartment(3333333);
    m[3] = new Car(111111);
    m[4] = new Car(222222);
    m[5] = new CountryHouse(11111111);
    m[6] = new CountryHouse(22222222);
    for (auto & i : m)
    {
        cout << i->tax() << " ";
    }

}