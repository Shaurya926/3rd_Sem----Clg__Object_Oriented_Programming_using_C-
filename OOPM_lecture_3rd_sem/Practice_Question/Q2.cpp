// This is a comment in C++
#include <iostream>
using namespace std;
class Base {
public:
    void show() {
        cout << "Base class show function called." << endl;
    }
};
class Derived : public Base {
public:
    void show() {
        cout << "Derived class show function called." << endl;
    }
};
int main() {
    Base* basePtr;        // Base class pointer
    Derived derivedObj;   // Derived class object

    basePtr = &derivedObj; // Pointing base class pointer to derived class object

    basePtr->show();      // Calls Base class show function

    return 0;
}