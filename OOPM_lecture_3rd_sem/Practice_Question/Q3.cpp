// Write a C++ program to demonstrate the use of virtual functions and pure virtual functions
//  in a base class and derived class.

#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class display function." << endl;
    }
    virtual void show() = 0; // Pure virtual function
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class display function." << endl;
    }
    void show() override {
        cout << "Derived class show function." << endl;
    }
};

int main() {
    Base* ptr;
    Derived obj;
    ptr = &obj;
    ptr->display();
    ptr->show();
    return 0;
}