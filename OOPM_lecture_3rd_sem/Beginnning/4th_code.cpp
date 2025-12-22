#include<iostream>
namespace std;

// Base class 1
class Car {
public:
    void drive() {
        cout << "Driving on land " << endl;
    }
};

// Base class 2
class Boat {
public:
    void sail() {
        cout << "Sailing on water " << endl;
    }
};

// Derived class inheriting from both Car and Boat
class DualModeVehicle : public Car, public Boat {
public:
    void use() {
        drive();  // From Car
        sail();   // From Boat
    }
};

int main() {
    DualModeVehicle myVehicle;
    myVehicle.use();  // Demonstrates both functionalities
    return 0;
}