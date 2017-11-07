#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>
#include <iostream>
#include "fecha.h"

using namespace std;

class empleado
{
    private:
        string nombre;
        int salario;
        fecha f;

    public:
        empleado();
        empleado(string n,int s,int d,int m,int a);

        void set_salario(int s);
        void set_nombre(string n);
        void set_fecha();

        void mostrar();
};

#endif // EMPLEADO_H
