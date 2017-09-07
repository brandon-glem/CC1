#include <iostream>

using namespace std;

bool aniobiciesto(int anio){
    if(anio % 4 == 0){
        if (anio%100 != 0 || anio % 400 == 0){
            return true;
        }
    }
    else
            return false;
}

int nesimoprimo(int l){
    int a,b=0,y=1;
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
            return y;

        }
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

bool potenciados(int x){
    while(x%2==0){
        x=x/2;
    }
    if(x==1){
        return true;
    }
    else
        return false;
}

bool potencia_dos(int x){
    if((x & (x-1)) == 0){
        return true;
    }
    else
        return false;
}

int main()
{
    int numero;
    int anio;

    cout<<"1 = Anio Biciesto"<<endl;
    cout<<"2 = n_esimo primo"<<endl;
    cout<<"3 = ¿Es Primo?"<<endl;
    cout<<"4 = potencia de dos"<<endl;
    cout<<"5 = potencia de dos(bits)"<<endl;
    cout<<"Ingrese una Opcion: ";
    cin>>numero;

    if(numero==1){
      cout<<"ingrese un anio:";
        cin>>anio;
        if(aniobiciesto(anio)==true){
            cout<<"Es biciesto";
            }
        else
            cout<<"No es biciesto";
    }

    if(numero==2){
            int x,nesimo;
            cout<<"ingrese numero: ";
            cin>>x;
            nesimo=(nesimoprimo(x));
            cout<<"el n_esimo numero primo de "<<x<<" es: "<<nesimo;
    }

    if(numero==3){
            int numero;
            cout<<"ingrese numero: ";
            cin>>numero;
            if(primo(numero)==true){
                cout<<"es primo";
            }
            else
                cout<<"no es primo";
    }

    if(numero==4){
        int numero;
        cout<<"ingrese un numero potencia de dos: ";
        cin>>numero;
        if(potenciados(numero)==true){
            cout<<numero<<" es potencia de dos";
        }
        else
            cout<<numero<<" no es potencia de dos";
    }

    if(numero==5){
        int numero;
        cout<<"ingrese un numero potencia de dos: ";
        cin>>numero;
        if(potencia_dos(numero)==true){
            cout<<numero<<" es potencia de dos";
        }
        else
            cout<<numero<<" no es potencia de dos";
    }

    return 0;
}
