#include <iostream>
#include <string>
using namespace std;

class car {
protected:
    string fuel_type;
public:
    void setFuelType(string f) {
        fuel_type = f;
    }
    void start() {
        cout << "Car started with " << fuel_type << endl;
    }
    void stop() {
        cout << "Car stopped" << endl;
    }
};

class family_car : virtual public car {
public:
    int seating_capacity;
    void open_trunk() {
        cout << "Trunk opened" << endl;
    }
};

class sports_car : virtual public car {
public:
    int max_speed;
    void turbo_boost() {
        cout << "Turbo boost activated" << endl;
    }
};

class suv : public family_car, public sports_car {
public:
    string drive_mode;
    void off_road_mode() {
        cout << "Off-road mode activated" << endl;
    }
};

int main() {
    suv s1;
    s1.setFuelType("diesel");   // set fuel type safely
    s1.start();
    s1.stop();
    s1.open_trunk();
    s1.turbo_boost();
    s1.off_road_mode();
    return 0;
}