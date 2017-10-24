#ifndef FECHA_H
#define FECHA_H
#include <string>
#include <iostream>

using namespace std;


class fecha
{
    private:
        int dia,mes,anio;
        string l_mes;
        void asig_mes();
        void agreg_biciesto();
    public:
        fecha();
        fecha(int d,int m,int a);

        bool anio_biciesto();
        void anadir_dias(int x);
        void print();
};

#endif // FECHA_H
