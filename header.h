#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string make;
    string model;
    int variant;

public:
    Vehicle(const string& make = "", const string& model = "", int variant = 0)
        : make(make), model(model), variant(variant) {}

    string getMake() const { return make; }
    string getModel() const { return model; }
    int getVariant() const { return variant; }

    void setMake(const string& make) { this->make = make; }
    void setModel(const string& model) { this->model = model; }
    void setVariant(int variant) { this->variant = variant; }

    bool operator==(const Vehicle& other) const {
        return make == other.make && model == other.model && variant == other.variant;
    }

    Vehicle& operator=(const Vehicle& other) {
        if (this != &other) {
            make = other.make;
            model = other.model;
            variant = other.variant;
        }
        return *this;
    }

    Vehicle& operator++() {
        ++variant;
        return *this;
    }

    friend ostream& operator<<(ostream& os, const Vehicle& vehicle) {
        os << vehicle.make << " " << vehicle.model << " " << vehicle.variant;
        return os;
    }

    friend istream& operator>>(istream& is, Vehicle& vehicle) {
        is >> vehicle.make >> vehicle.model >> vehicle.variant;
        return is;
    }

    virtual double calculateFuelEfficiency() const {
        return 0.0;  
    }
};

class Car : public Vehicle {
private:
    int numDoors;
    bool isConvertible;

public:
    Car(const string& make = "", const string& model = "", int variant = 0, int numDoors = 0, bool isConvertible = false)
        : Vehicle(make, model, variant), numDoors(numDoors), isConvertible(isConvertible) {}

    int getNumDoors() const { return numDoors; }
    bool getIsConvertible() const { return isConvertible; }

    void setNumDoors(int numDoors) { this->numDoors = numDoors; }
    void setIsConvertible(bool isConvertible) { this->isConvertible = isConvertible; }

    double calculateFuelEfficiency() const override {
        return 0.0;  
    }
};

class Truck : public Vehicle {
private:
    double payloadCapacity;
    bool hasTrailer;

public:
    Truck(const string& make = "", const string& model = "", int variant = 0, double payloadCapacity = 0.0, bool hasTrailer = false)
        : Vehicle(make, model, variant), payloadCapacity(payloadCapacity), hasTrailer(hasTrailer) {}

    double getPayloadCapacity() const { return payloadCapacity; }
    bool getHasTrailer() const { return hasTrailer; }

    void setPayloadCapacity(double payloadCapacity) { this->payloadCapacity = payloadCapacity; }
    void setHasTrailer(bool hasTrailer) { this->hasTrailer = hasTrailer; }

    double calculateFuelEfficiency() const override {
        return 0.0;
    }
};

class Bus : public Vehicle {
private:
    int seatingCapacity;
    bool hasDoubleDecker;

public:
    Bus(const string& make = "", const string& model = "", int variant = 0, int seatingCapacity = 0, bool hasDoubleDecker = false)
        : Vehicle(make, model, variant), seatingCapacity(seatingCapacity), hasDoubleDecker(hasDoubleDecker) {}

    int getSeatingCapacity() const { return seatingCapacity; }
    bool getHasDoubleDecker() const { return hasDoubleDecker; }

    void setSeatingCapacity(int seatingCapacity) { this->seatingCapacity = seatingCapacity; }
    void setHasDoubleDecker(bool hasDoubleDecker) { this->hasDoubleDecker = hasDoubleDecker; }

    double calculateFuelEfficiency() const override {
        return 0.0;
    }
};

