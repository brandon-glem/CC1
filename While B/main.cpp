#include <iostream>
#include "conio.h"

using namespace std;

int main(){

    int numero, m = 2;
    bool band = true;

    cout<< "Favor ingresar numero: ";
    cin>>numero;

    while(band && m < numero){

        if(numero % m == 0){


            band = false;
        }
        else{
            m = m + 1;
        }
    }
    if(band){
        cout<< "El numero es primo";
    }

    else{
        cout<< "El numero NO es primo";
        }
    getch();
 }
