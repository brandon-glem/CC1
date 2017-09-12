#include <iostream>

using namespace std;

bool calcular(int num, int n) {
    if (n == 0) {
        return true;
    }
    return (num % n != 0) ? false : calcular(num,n-1);
}

int main()
{
int opcion;
cout<< "PROJECT EULER"<<endl;
cout<< "1 = Múltiples de 3 y 5"<<endl;
cout<< "2 = fobonacci",endl;
cout<< "3 = Múltiple más pequeño",endl;
cout<< "ingrese una opcion: ";
cin>>opcion;

if(opcion==1){
 int sum=0,num=1000;

 for(int x=0; x<num;x++){
        if(x%3==0){
            sum=sum+x;
        }
        if(x%5==0){
            sum=sum+x;
        }
    }
    cout<< sum;
}

if(opcion==2){
  int a = 1, b = 2, fib = 0, resp = 2;

  while (a+b < 4000000){
          fib = a+b;
          if (fib % 2 == 0) {resp += fib;}
          a = b;
          b = fib;
     }
   cout << endl << "la suma fibonacci es:  " << resp << endl;
}

if(opcion==3){
 long int num=600851475143;
 int distancia=0;

 for( int i=2; num!=1; ++i){
		while( num%i==0){
			num/=i;
			distancia=i;
		}
	}
	cout<<"el numero requerido es: "<<distancia;
}

if(opcion==5){
    int num = 20;
    int resultado = num;
    while (!calcular(resultado, num)) {
        resultado += num;
    }
    cout << resultado << '\n';
}
