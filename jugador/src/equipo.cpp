#include "equipo.h"
#include "jugador.h"

void equipo::setnombre(string x){
    nom_equipo=x;
}
void equipo::setjugador(){
    cout<<"ingrese el nombre del jugador: ";
}
void equipo::setagregar_jugadores(){
    int opcion;
    string nombre;
    for(int i=0;i<11;i++){
        jugador a;
        a.print();
        cout<<"desea cambiar el nombre(0=si/1=no): ";
        cin>>opcion;
        if(opcion==1){
            cout<<"cual es el nuevo nombre: ";
            cin>>nombre;
            a.setnombre(nombre);
        }
    }
}
