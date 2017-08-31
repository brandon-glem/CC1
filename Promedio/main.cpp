#include <iostream>

using namespace std;

int main()
{
    int mayor=0,menor=0,Mayor,Menor;
    double promedio, numeros=0, suma=0, nota, cantidad;
    cout<<"cuantas notas va ha ingresar: ";
    cin>>cantidad;
    while(cantidad!=0){
        cout<<"ingrese nota: ";
        cin>>nota;
        Mayor=((nota>mayor)?mayor=nota:nota);
        Menor=((nota<mayor)?menor=nota:nota);
        suma=suma + nota;
        numeros=numeros+1;
        cantidad = cantidad-1;
    }
    (nota<mayor)?menor:nota;
    promedio = suma / numeros;
    cout<<"su promedio es: "<<promedio<<endl;
    cout<<"Y la mayor nota que tiene es: "<<Mayor<<endl;
    cout<<"Y la menor nota que tiene es: "<<Menor;
    return 0;
}
