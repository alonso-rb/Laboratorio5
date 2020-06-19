#include <iostream>
using namespace std;

int calculo (int hora, int minutos, int segundos){
    int nuevseg, nuevmin, nuevhora;
    nuevseg=segundos+1;
    nuevmin=minutos+1;
    nuevhora=hora+1;
    if(nuevseg==60 & nuevhora!=24 & nuevmin!=60){
        cout<<hora<<" : "<<nuevmin<<" : "<<"00";
    }
    else if (nuevseg==60 & nuevmin==60 & nuevhora!=24){
        cout<<nuevhora<<" : "<<"00"<<" : "<<"00";
    }
    else if (nuevhora==24 & nuevseg==60 & nuevmin==60)
    {
        cout<<"00"<<" : "<<"00"<<" : "<<"00";
    }
    else{
       cout<<hora<<" : "<<minutos<<" : "<<segundos+1; 
    }
}

int main(){
    int hora, minutos, segundos;
    cout<<"Ingrese la hora"<<endl;
    cin>>hora;
    cout<<"Ingrese los minutos"<<endl;
    cin>>minutos;
    cout<<"Ingrese los segundos"<<endl;
    cin>>segundos;
    while(hora<0 | hora>24 | minutos<0 | minutos>60 | segundos<0 | segundos>60){
    cout<<"Favor ingresar bien los datos solicitados"<<endl;
    cout<<"Ingrese la hora"<<endl;
    cin>>hora;
    cout<<"Ingrese los minutos"<<endl;
    cin>>minutos;
    cout<<"Ingrese los segundos"<<endl;
    cin>>segundos;
    }
    cout<<"La hora un segundo después es"<<endl;
    calculo(hora, minutos, segundos);
    return 0;
}