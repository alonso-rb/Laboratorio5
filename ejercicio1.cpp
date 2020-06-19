#include <iostream>
using namespace std;

int prueba (int nummayor, int nummenor){
    int mod, resultado;
    mod=nummayor%nummenor;
    do{
        nummayor=nummenor;
        nummenor=mod;
    }while (nummenor!=0);
  
    resultado=nummayor;
    cout<<resultado;
}

int main(){
    int nummayor, nummenor;
    cout<<"A continuación, se le solicitarán dos números para calcular su MCD."<<endl;
    cout<<"Ingrese el número mayor"<<endl;
    cin>>nummayor;
    cout<<"Ingrese el número menor"<<endl;
    cin>>nummenor;
    while (nummayor<nummenor & nummayor<=0 & nummenor<=0){
        cout<<"Ingrese el número mayor"<<endl;
    cin>>nummayor;
    cout<<"Ingrese el número menor"<<endl;
    cin>>nummenor;
    }
    prueba(nummayor, nummenor);
    return 0;
}