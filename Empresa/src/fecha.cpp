#include "fecha.h"

fecha::fecha(){
    dia=31;
    mes=10;
    anio=2017;
}
fecha::fecha(int d,int m,int a){
    dia=d;
    mes=m;
    anio=a;
}

bool fecha::anio_biciesto(){
    if(anio % 4 == 0){
        if (anio%100 != 0 || anio % 400 == 0){
            return true;
        }
    }
    else
            return false;
}

void fecha::anadir_dias(int x){
    dia=dia+x;
    agreg_biciesto();
    while((dia>30)||(dia>31)){
        if((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12)){
            dia=dia-31;
            mes=mes+1;
            asig_mes();
        }
        if(mes==2){
            agreg_biciesto();
            dia=dia-28;
            mes=mes+1;
            asig_mes();
        }
        dia=dia-30;
        mes=mes+1;
        asig_mes();
    }
}
void fecha::print(){
    cout<<"el dia: "<<dia<<endl;
    asig_mes();
    cout<<"el mes: "<<l_mes<<endl;
    cout<<"el anio: "<<anio<<endl;
}

void fecha::asig_mes(){
    if(mes==1){
        l_mes="Enero";
    }
    if(mes==2){
        l_mes="Febrero";
    }
    if(mes==3){
        l_mes="Marzo";
    }
    if(mes==4){
        l_mes="Abril";
    }
    if(mes==5){
        l_mes="Mayo";
    }
    if(mes==6){
        l_mes="Junio";
    }
    if(mes==7){
        l_mes="Julio";
    }
    if(mes==8){
        l_mes="Agosto";
    }
    if(mes==9){
        l_mes="Septiembre";
    }
    if(mes==10){
        l_mes="Ocubre";
    }
    if(mes==11){
        l_mes="Noviembre";
    }
    if(mes==12){
        l_mes="Diciembre";
    }
    if(mes>12){
        mes=mes-12;
        anio=anio+1;
        asig_mes();
    }
}
void fecha::agreg_biciesto(){
    bool x=anio_biciesto();
    if(x==true){
        if(dia<29){
            dia=dia-29;
            mes=mes+1;
            asig_mes();
        }
    }
}

void fecha::set_fecha(int d,int m,int a){
    dia=d;
    mes=m;
    anio=a;
}
