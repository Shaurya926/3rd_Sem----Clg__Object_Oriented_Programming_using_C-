// //given a class rectangle with attributes length and breadth rides methods to calculate area and perimeter
// //also demonstrate the use of constructor and destructor
//  #include <iostream>
//  using namespace std;
// // class Rectangle {
// //     protected:
// //         double length;
// //         double breadth;
// //     public:
// //         // Constructor
// //         Rectangle(double l, double b) : length(l), breadth(b) {
// //             cout << "Rectangle created with length: " << length << " and breadth: " << breadth << endl;
// //         }
        
// //         // Destructor
// //         ~Rectangle() {
// //             cout << "Rectangle destroyed" << endl;
// //         }
        
// //         // Method to calculate area
// //         double area() {
// //             return length * breadth;
// //         }
        
// //         // Method to calculate perimeter
// //         double perimeter() {
// //             return 2 * (length + breadth);
// //         }
// // };
// // int main(){
// //     Rectangle rect(5.0, 3.0);
// //     cout << "Area: " << rect.area() << endl;
// //     cout << "Perimeter: " << rect.perimeter() << endl;

// //     return 0;
// // }
// // in above question cuboid class which should be th derived class of rectangle class the cuboid class 
// //should have only one varible also wright a function also the volume of the cuboid note that because of inhertiance th lenght and breadth
// //present in the rectangle class should be used in the cuboid class. what are changes need to be done class for this new class.
// class Cuboid : public Rectangle {
//     private:
//         double height;
//     public:
//     Rectangle(double l, double b, double h) : length(l), breadth(b) {
//             cout << "Rectangle created with length: " << length << " and breadth: " << breadth << endl;
//         }
//         // Constructor
//         Cuboid(double l, double b, double h) : Rectangle(l, b), height(h) {
//             cout << "Cuboid created with height: " << height << endl;
//         }
        
//         // Destructor
//         ~Cuboid() {
//             cout << "Cuboid destroyed" << endl;
//         }
        
//         // Method to calculate volume
//         double volume() {
//             return length * breadth * height;
//         }
// };
// int main(){
//     Rectangle Rectangle(5.0, 3.0, 4.0);
//     cout << "Area: " <<Rectangle.area() << endl;
//     cout << "Perimeter: " << Rectangle.perimeter() << endl;

//     Cuboid cub(5.0, 3.0, 4.0);
//     cout << "Volume: " << Cuboid.volume() << endl;

//     return 0;
// }
