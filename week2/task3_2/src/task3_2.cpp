#include <iostream>
#include <vector>
#include <string>

class Engine {
private:
    int power;

public:
    Engine(int p) : power(p) {}

    int getPower() {
        return power;
    }
};

class Passenger {
private:
    std::string name;

public:
    Passenger(const std::string& n) : name(n) {}

    std::string getName() {
        return name;
    }
};

class Car {
private:
    std::string model;
    Engine engine;
    Passenger* passenger1;
    Passenger* passenger2;

public:
    Car(const std::string& m, Engine e) : model(m), engine(e), passenger1(nullptr), passenger2(nullptr) {}

    void addPassenger(Passenger* passenger) {
        if (!passenger1) {
            passenger1 = passenger;
        } else if (!passenger2) {
            passenger2 = passenger;
        } else {
            std::cout << "Car is full. Cannot add more passengers." << std::endl;
        }
    }

    void removePassenger(Passenger* passenger) {
        if (passenger1 == passenger) {
            passenger1 = nullptr;
        } else if (passenger2 == passenger) {
            passenger2 = nullptr;
        } else {
            std::cout << "Passenger not found in the car." << std::endl;
        }
    }

    void displayInfo() {
        std::cout << "Car Model: " << model << std::endl;
        std::cout << "Engine Power: " << engine.getPower() << " HP" << std::endl;
        
        if (passenger1) {
            std::cout << "Passenger 1: " << passenger1->getName() << std::endl;
        }

        if (passenger2) {
            std::cout << "Passenger 2: " << passenger2->getName() << std::endl;
        }
    }
};

int main() {
    Engine carEngine(200); // Engine power of 200 HP
    Car myCar("Lada Xray", carEngine);

    Passenger passenger1("Vlad");
    Passenger passenger2("Andrey");

    myCar.addPassenger(&passenger1);
    myCar.addPassenger(&passenger2);

    myCar.displayInfo();

    myCar.removePassenger(&passenger1);
    myCar.displayInfo();

    return 0;
}

