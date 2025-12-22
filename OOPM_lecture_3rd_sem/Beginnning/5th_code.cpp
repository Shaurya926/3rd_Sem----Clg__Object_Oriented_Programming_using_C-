#include<iostream>
using namespace std;
class Cars{
    void StartEngine();{
        cout<<"Engine started"<<endl;
    }
};
class Driver{
    public:
    void drive(Cars car){
        car StartEngine();{
        cout<<"Car is being drived"<<endl;}
    }
};
int main(){
    Cars mycar;
    Driver drive;
    drive.drive(mycar);
}