// Write a program to implement a class named "Rectangle" with the following features:
// Data Members: length, breadth
// Member Functions:
// 1. A parameterized constructor to initialize length and breadth
// 2. A function to calculate the area of the rectangle

#include <iostream>
using namespace std;
class Rectangle {
    private:
        float length;
        float breadth;
    public:
        // Parameterized constructor
        Rectangle(float l, float b) {
            length = l;
            breadth = b;
        }
        
        // Function to calculate area
        float area() {
            return length * breadth;
        }
};
class TestRectangle {
    public:
        void run() {
            float length, breadth;
            cout << "Enter length of the rectangle: ";
            cin >> length;
            cout << "Enter breadth of the rectangle: ";
            cin >> breadth;
            
            Rectangle rect(length, breadth);
            cout << "Area of the rectangle: " << rect.area() << endl;
        }
};
int main() {
    TestRectangle test;
    test.run();
    return 0;
}
