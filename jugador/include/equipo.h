#ifndef EQUIPO_H
#define EQUIPO_H
#include <string>
#include <iostream>
#include "jugador.h"

using namespace std;

class equipo
{
    private:
        string nom_equipo;
        jugador equipo[11];
    public:

        void setnombre(string x);
        void setagregar_jugadores();
        void setjugador();



};

#endif // EQUIPO_H
