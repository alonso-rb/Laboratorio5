#include <iostream>
using namespace std;

bool prueba1(int year){
    int modyear=year%4000, mod4=year%4, mod100=year%100;
    if (modyear==0){
    
    return true;
    }
    else if (mod4==0 & mod100!=100){
        return true;
    }
    else{
        return false;
    }
    
}
int main(){
    int year;
    cout<<"Ingrese un año"<<endl;
    cin>>year;

    if(prueba1(year)==true){
        cout<<"Es año bisiesto"<<endl;
    }
    else
    {
        cout<<"No es año bisiesto"<<endl;
    }
    
    return 0;
}