#include <iostream>
using namespace std;
class demo{
    public:
    int x;
    demo(){
        x=2;
        cout<<"Constructed\n";
    }
    ~demo(){
        cout<<"Destructed\n";
    }
};
int main(){
    demo a;{
        demo b;
    }
    demo *c=new demo;
}