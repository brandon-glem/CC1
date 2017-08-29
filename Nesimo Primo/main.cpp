#include <iostream>

using namespace std;

int main(){

    int a,b=0,l,y=1;
    cout<<"Ingrese la cantidad de numeros primos que quiere: ";
    cin>>l;
    while(l!=b){
            a=0;
            y=y+1;
            for(int z=2;z<1000;z+=1){
                if(y%z==0){
                    a=a+1;
                    }
            }
        if(a<2){
            b=b+1;}
        if(a<2&l==b){
            cout<<"Primo nesimo de "<<b<<" es: "<<y<<endl;

        }

    }
    return 0;
}
