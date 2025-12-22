#include <iostream>
using namespace std;


class car{
    char fule_type;
    void start(){
        cout<<"car started";
    }
    void stop(){
        cout<<"car stopped";
    }
};
class family_car : public car{
    public:
    int seating_capacity;
    void open_trunk(){
        cout<<"trunk opened";
    }
};
class sports_car : public car{
    public:
    int max_speed;
    void turbo_boost(){
        cout<<"turbo boost activated";
    }
};
class suv :public family car, public sports car{
    public:
    String drive_mode;
    void off_road_mode(){
        cout<<"off-road mode activated";
    }
};
int main(){
    suv s1;
    s1.family_car::fule_type="diesel";
    s1.start();
    s1.stop();
}