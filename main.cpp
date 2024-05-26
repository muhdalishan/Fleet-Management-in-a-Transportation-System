#include <iostream>
#include"header.h"
#include <string>
using namespace std;
int main() {
    Vehicle* vehicles[3];
    vehicles[0] = new Car("Ford", "Mustang", 2020, 2, false);
    vehicles[1] = new Truck("Volvo", "FH16", 2019, 20.0, true);
    vehicles[2] = new Bus("Mercedes-Benz", "Tourismo", 2021, 50, false);

    for (int i = 0; i < 3; ++i) {
        cout << *vehicles[i] << endl;
        cout << "Fuel efficiency: " << vehicles[i]->calculateFuelEfficiency() << endl;
    }

    return 0;
}