#include <iostream>
using namespace std;

int main(){
    try{
        int x=0;
        if(x==1)
        throw -1;
    else if(x==2)
    throw 'a';
else if(x==3)
throw 2.5;
    }
    catch (int &e){
        cout<< "int error";
    }
    catch (char &e){
        cout<< "char error";
    }
    catch (double &e){
        cout<< "double error";
    }
    catch (...){
        cout<< "unknown error";
    }
}