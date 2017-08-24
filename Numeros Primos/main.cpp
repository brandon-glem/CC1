#include <iostream>

using namespace std;

int main(){
    int numero, divisores=0,i;
    cout<<"ingrese numero: ";
    cin>>numero;
    for(i=1;i<(numero+1);i=i+1){
        if ((numero%i)==0){
            divisores=divisores+1;
        }
    }
    if(divisores!=2){
        cout<<"no es primo";
    }
    else
        cout<< "es primo";
    return 0;
}
