#include <iostream>
using namespace std;

bool pruebabisiesto(int year){
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
bool calcular(int dia, int mes, int year, int bisiesto){
    
    
    if((mes==1 | mes==3 | mes==5 | mes==7 | mes==8 | mes==10 | mes==12) & dia>=0 & dia<=31){
       return true;
    }
    else if ((mes==4 | mes==6 | mes==9 | mes==11) & dia>=0 & dia<=30){
        return true;
    }
    else if (mes==2){
        if(bisiesto==1){
            if (dia>=0 & dia<=29){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            if (dia>=0 & dia<=29){
                return true;
            }
            else{
                return false;
            }
        }
    }
    else{
        return false;
    }
}
int nextday(int dia, int mes, int year, int bisiesto){
    int nuevodia, nuevomes, nuevoyear;
    nuevodia=dia+1;
    nuevomes=mes+1;
    nuevoyear=year+1;
    if((mes==1 | mes==3 | mes==5 | mes==7 | mes==8 | mes==10) & dia<31){
      cout<<"El siguiente día es "<<nuevodia<<" , "<<mes<<" , "<<year<<endl;
    }
    else if ((mes==1 | mes==3 | mes==5 | mes==7 | mes==8 | mes==10) & dia==31)
    {
        cout<<"El siguiente día es "<<1<<" , "<<nuevomes<<" , "<<year<<endl;
    }
    else if ((mes==4 | mes==6 | mes==9 | mes==11) & dia>=0 & dia<30)
    {
        cout<<"El siguiente día es "<<nuevodia<<" , "<<mes<<" , "<<year<<endl;
    }
     else if ((mes==4 | mes==6 | mes==9 | mes==11) & dia>=0 & dia==30)
    {
        cout<<"El siguiente día es "<<1<<" , "<<nuevomes<<" , "<<year<<endl;
    }
    else if(mes==2){
        if(bisiesto==1){
            if (dia<29){
                cout<<"El siguiente día es "<<nuevodia<<" , "<<mes<<" , "<<year<<endl;
            }
            else
            {
                cout<<"El siguiente día es "<<1<<" , "<<nuevomes<<" , "<<year<<endl;
            }
        }
        else{
            if (dia<28){
                cout<<"El siguiente día es "<<nuevodia<<" , "<<mes<<" , "<<year<<endl;
            }
            else
            {
                cout<<"El siguiente día es "<<1<<" , "<<nuevomes<<" , "<<year<<endl;
            }
        }    
        }
    else if(mes==12 & dia<31){
        cout<<"El siguiente día es "<<nuevodia<<" , "<<mes<<" , "<<year<<endl;
    }
    else{
        cout<<"El siguiente día es "<<1<<" , "<<1<<" , "<<nuevoyear<<endl;
    }
    }
    

int main(){
    int dia, mes, year, bisiesto;
    cout<<"Ingrese el día"<<endl;
    cin>>dia;
    cout<<"Ingrese el mes"<<endl;
    cin>>mes;
    cout<<"Ingrese el año"<<endl;
    cin>>year;
    if (pruebabisiesto(year)==1)
    {
        bisiesto=1;
    }
    else{
        bisiesto=0;
    }
    
    if(calcular(dia, mes, year, bisiesto)==1){
        nextday(dia, mes, year, bisiesto);
    }
    else{
        cout<<"No se podrá calcular"<<endl;
    }
}