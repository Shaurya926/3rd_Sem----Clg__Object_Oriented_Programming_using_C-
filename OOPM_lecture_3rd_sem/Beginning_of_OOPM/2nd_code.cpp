#include<iostream>
using namespace std;

// Base class
class Animal {
public:
    void speak() {
        cout << "The animal makes a sound." << endl;
    }
};
// Derived class
class Dog : public Animal {
public:
    void speak() {
        cout << "The dog barks." << endl;
    }
};
int main() {
    Animal animal;
    Dog dog;

    animal.speak(); // Calls base class method
    dog.speak();    // Calls derived class method

    return 0;
}