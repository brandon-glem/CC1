#include "empleado.h"
#include "fecha.h"

empleado::empleado(){
    nombre="juan";
    salario=875;
    f.set_fecha(24,10,2017);
}

empleado::empleado(string n,int s,int d,int m, int a){
    nombre=n;
    salario=s;
    f.set_fecha(d,m,a);
}

void empleado::set_salario(int s){
    salario=s;
}
void empleado::set_nombre(string n){
    nombre=n;
}
void empleado::set_fecha_e(){
    int d,m,a;
    cout<<"dia de ingreso: "<<endl;
    cin>>d;
    cout<<"mes de ingreso: "<<endl;
    cin>>m;
    cout<<"anio de ingreso: "<<endl;
    cin>>a;
    f.set_fecha(d,m,a);
}
void empleado::mostrar(){
    cout<<"el nombre del empleado es: "<<nombre<<endl;
    cout<<"el salario del empleado es: "<<salario<<endl;
    cout<<"el fecha de ingreso del empleado es: "<<endl;
    f.print();
}
