#include <iostream>
using namespace std;

class Vehicle {
protected:   // allow derived classes to access
    string brand = "Ford";
    void honk() {
        cout << "Tuut, tuut!" << endl;
    }
};

class Car : public Vehicle {
public:
    string model = "Mustang";
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        honk();
    }
};

int main() {
    Car myCar;
    myCar.display();
    return 0;
}