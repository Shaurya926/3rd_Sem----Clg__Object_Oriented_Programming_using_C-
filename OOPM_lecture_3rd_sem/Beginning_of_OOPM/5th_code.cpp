#include<iostream>
using namespace std;
class Cars{
    public:
    void StartEngine()
    {
        cout<<"Engine started"<<endl;
    }
};
class Driver{
    public:
    void drive(Cars car){
        car.StartEngine();
        cout<<"Car is being driven"<<endl;
    }
};
int main(){
    Cars mycar;
    Driver drive;
    drive.drive(mycar);
}