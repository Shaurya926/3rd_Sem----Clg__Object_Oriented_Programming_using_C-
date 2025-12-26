#include <iostream>
using namespace std;

class Hero {
protected:
    int power;
public:
    void set_power(int p) {
        power = p;
    }
    int get_power() const {
        return power;
    }
};

class Villan {
protected:
    int power;
public:
    void set_power(int p) {
        power = p;
    }
    int get_power() const {
        return power;
    }
};

class Comparision {
public:
    void power_comp(const Hero &H, const Villan &V) {
        if (H.get_power() > V.get_power()) {
            cout << "Hero is stronger" << endl;
        } else {
            cout << "Villan is stronger" << endl;
        }
    }
};

int main() {
    Hero CA;
    Villan Skull;

    CA.set_power(150);
    Skull.set_power(100);

    Comparision C;
    C.power_comp(CA, Skull);

    return 0;
}