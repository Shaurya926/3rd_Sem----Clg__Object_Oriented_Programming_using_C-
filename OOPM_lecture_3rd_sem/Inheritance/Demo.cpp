#include <iostream>
using namespace std;
// How to use constructor and destructor.

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