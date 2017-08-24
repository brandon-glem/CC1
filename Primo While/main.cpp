#include <iostream>

using namespace std;

int main()
{
    int numero, divisores=0,i=1;
    cout<<"ingrese numero: ";
    cin>>numero;
    while((numero+1)>i){
        if ((numero%i)==0){
            divisores=divisores+1;
        }
        i=i+1;
    }
    if(divisores!=2){
        cout<<"no es primo";
    }
    else
        cout<< "es primo";
    return 0;
}
