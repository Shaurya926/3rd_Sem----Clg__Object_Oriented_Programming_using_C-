#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int year;

    // Constructor
    Car(string b, int y) {
        brand = b;
        year = y;
    }

    void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car myCar("Toyota", 2022);  // Constructor is called here
    myCar.display();

    return 0;
}