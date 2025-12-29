#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    try{
        if (b == 0){
            throw b;
        }
        cout << "Result: " << a / b << endl;
    }
    catch (int &e){
        cout << "Error: Division by zero is not allowed." << endl;
    }
    cout<<"End of program."<<endl;
    return 0;  
}