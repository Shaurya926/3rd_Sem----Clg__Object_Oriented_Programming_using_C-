//Basic calculator.
#include <iostream>
using namespace std;

class Basic_Calculator{
    public:
    virtual double add(double a, double b){
        return a + b;
    }
    virtual double subtract(double a, double b){
        return a - b;
    }
    virtual double multiply(double a, double b)=0; //These two are called virtual function.
    virtual double divide(double a, double b)=0; //These two are called virtual function.
};
class Calculator: public Basic_Calculator{
    public:
    virtual double multiply(double a, double b){
        return a*b;
    }
    virtual double divide(double a, double b){
        return a/b;
    }
};
int main(){
    //Basic_Calculator b; Not allowed
    Calculator b; //Allowed
    //Basic_Calculator *b=new Basic_Calculator; Not allowed.
    Basic_Calculator *ptr=new Calculator; //Allowed.
    cout<< ptr->add(2,4);
    cout<< ptr->subtract(9,5);
    cout<< ptr->multiply(6,4);
    cout<< ptr->divide(8,2);

}
