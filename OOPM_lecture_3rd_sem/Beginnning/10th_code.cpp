#include<iostream>
using namespace std;

// Abstract class
class myfriend {
public:
    virtual void myshoe() = 0; // Pure virtual function
};

// Derived class
class me : public myfriend {

public:
    void myshoe() override {
      
        cout << "ther"  << endl;
    }

    
};

int main() {
    me j;
    j.myshoe();  // Sets power
      // Displays power
    return 0;
}