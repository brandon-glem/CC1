#include <iostream>
using namespace std;

bool esMayor(int edad){
	if(edad<17)
		return false;
	return true;
}

int sucesion(int n,int au=0){
	if(n==au)
		return n;
	cout<<au<<",";
	sucesion(n,au+=1);
}

void operaciones(float x, float y, float z,float &may,float &men,float &prom){
	if(x>y && x>z)
		may=x;
	if(y>x && y>z)
		may=y;
	if(z>x && z>y)
		may=x;
	if(x<y && x<z)
		men=x;
	if(y<x && y<z)
		men=y;
	if(z<x && z<y)
		men=z;
	prom=(x+y+z)/3;
}	

void evaluar(int x, int y,bool &multiplo2,bool &multiplosi, bool &igualdad2){
	if(((x%2)== 0)&&((y%2)==0))
		multiplo2=true;
	if((x%y)==0)
		multiplosi=true;
	if((x^2)==y){
		igualdad2=true;	
}
}

bool primo(int numero){
	int divisores=0,i;
	for(i=1;i<(numero+1);i=i+1){
		if ((numero%i)==0){
			divisores=divisores+1;
		}
	}
	if(divisores!=2){
		return false;
	}
	else
	   return true;
}

int main() {
	int opcion;
	cout<<"1 = eres mayor?"<<endl;
	cout<<"2 = sucesion"<<endl;
	cout<<"3 = operaciones"<<endl;
	cout<<"4 = evaluar"<<endl;
	cout<<"5 = es primo?"<<endl;
	cout<<"6 = primos menores"<<endl;
	cout<<"7 = separacion de caracteres"<<endl;
	cout<<"8 = palindromo"<<endl;
	cout<<"9 = es bisiesto?"<<endl;
	cout<<"10 = fibonacci"<<endl;
	cout<<"11 = EXTRA factorial"<<endl;
	cout<<'\n';
	cout<<"ingese su opcion: ";
	cin>>opcion;
	cout<<'\n';

//funcion 1
if(opcion==1){
	int edad;
	cout<<"ingrese su edad: ";
	cin>>edad;
	cout<<esMayor(edad)<<endl;
}

//funcion 2
if(opcion==2){
	int numero;
	cout<<"ingrese el numero: ";
	cin>>numero;
	cout<<sucesion(numero)<<endl;
}

//funcion 3
if(opcion==3){
	float x,y,z,menor,mayor,promedio;
	cout<<"ingrese numero: ";
	cin>>x;
	cout<<"ingrese numero: ";
	cin>>y;
	cout<<"ingrese numero: ";
	cin>>z;
	operaciones(x,y,z,mayor,menor,promedio);
	cout<<"el mayor es: "<<mayor<<endl;
	cout<<"el menor es: "<<menor<<endl;
	cout<<"el promedio es: "<<promedio<<endl;
}

//funcion4
if(opcion==4){
	int numero1,numero2;
	bool multiplo2=false, multiplosi=false, igualdad2=false;
	cout<<"ingrese numero: ";
	cin>>numero1;
	cout<<"ingrese numero: ";
	cin>>numero2;
	evaluar(numero1,numero2,multiplo2,multiplosi,igualdad2);
	if(multiplo2==true)
		cout<<numero1<<" y "<<numero2<<" son multiplos de 2"<<endl;
	else
		cout<<numero1<<" y "<<numero2<<" no son multiplos de 2"<<endl;
	
	if(multiplosi==true)
		cout<<numero1<<" es multiplo de "<<numero2<<endl;
	else
		cout<<numero1<<" no es multiplo de "<<numero2<<endl;
	
	if(igualdad2==true)
		cout<<"la potencia al cuadrado de "<<numero1<<" es "<<numero2<<endl;
	else
		cout<<"la potencia al cuadrado de "<<numero1<<" no es "<<numero2<<endl;
}

//funcion 5
if(opcion==5){
	int numero;
	cout<<"ingrese numero: ";
	cin>>numero;
	if(primo(numero)==true){
		cout<<"es primo";
	}
	else
	   cout<<"no es primo";
}

//funcion 6
if(opcion==6){
	int numero,primo, divisores=0,j=2;
	cout<<"ingrese numero: ";
	cin>>numero;
	while(j<numero){
		for(int i=1;i<(j+1);i=i+1){
			if ((j%i)==0){
				divisores=divisores+1;
			}
			primo=i;
		}
		if(divisores==2){
			cout<<primo<<",";
		}
		j++;
		divisores=0;
	}
}
	
//funcion 7	
	
	
	
	return 0;
}

