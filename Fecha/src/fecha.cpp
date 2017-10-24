#include "fecha.h"

fecha::fecha(){
    dia=1;
    mes=1;
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
    cout<<"el dia es: "<<dia<<endl;
    asig_mes();
    cout<<"el mes es: "<<l_mes<<endl;
    cout<<"el anio es: "<<anio<<endl;
}

void fecha::asig_mes(){
    if(mes==1){
        l_mes="enero";
    }
    if(mes==2){
        l_mes="febrero";
    }
    if(mes==3){
        l_mes="marzo";
    }
    if(mes==4){
        l_mes="abril";
    }
    if(mes==5){
        l_mes="mayo";
    }
    if(mes==6){
        l_mes="junio";
    }
    if(mes==7){
        l_mes="julio";
    }
    if(mes==8){
        l_mes="agosto";
    }
    if(mes==9){
        l_mes="septiembre";
    }
    if(mes==10){
        l_mes="ocubre";
    }
    if(mes==11){
        l_mes="noviembre";
    }
    if(mes==12){
        l_mes="diciembre";
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
