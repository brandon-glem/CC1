#include <iostream>

using namespace std;

int main(){
    int anio;
    cout<<"ingrese un anio:";
    cin>>anio;
    if(anio % 4 == 0){
        if (anio%100 != 0 || anio % 400 == 0){
            cout<<"El anio " << anio << " ,si es Bisiesto";
        }
        else
            cout<<"El anio " << anio << " ,no es Bisiesto";
    }
    return 0;
}

