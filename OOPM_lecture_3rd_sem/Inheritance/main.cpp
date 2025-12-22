#include <iostream>
using namespace std;

class Appliance{
    public:
        void start(){
            cout << "Genric Appliance\n";
        }
};
class Toster : public Appliance{
    public:
        void start(){
            cout << "Toster colis heating up\n";
        }
};
class oven : public Appliance{
    public:
        void start(){
            cout << "Oven is preheating\n";
        }
};
int main(){
    Appliance *t = new Toster;
    Appliance *o = new oven;
}