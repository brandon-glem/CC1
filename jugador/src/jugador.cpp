#include "jugador.h"
jugador::jugador(){
    nom="jugador";
    num=0;
    pos="0";
    agresiv=0;
}
jugador::jugador(string a,int b,string c,int d){
    nom=a;
    num=b;
    pos=c;
    agresiv=d;
}

void jugador::setnombre(string a){
    nom=a;
}

void jugador::setnumero(int b){
    num=b;
}

void jugador::setposicion(string c){
    pos=c;
}

void jugador::setagresividad(int d){
    agresiv=d;
}

void jugador::print(){
    cout<<"el nombre del jugador es: "<<nom<<endl;
    cout<<"el numero del jugador es: "<<num<<endl;
    cout<<"la posicion del jugador es: "<<pos<<endl;
    if(agresiv>=5){
        cout<<"el jugador esta muy intranquilo lo recomendable es cambiarlo"<<endl;
    }
    else{
        cout<<"el jugador recien esta comenzando ha entrar en calor es mejor dejarlo en cancha"<<endl;
    }
}
