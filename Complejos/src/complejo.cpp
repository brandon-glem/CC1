#include "complejo.h"

complejo::complejo(){
    r=0;
    i=0;
}
complejo(int x, int y){
    r=x;
    i=y;
}
complejo suma(complejo x,complejo y){
    x.r=x.r+y.r;
    x.i=x.i+y.i;
}
bool igualdad(complejo x){
    if ((x.r==y.r)&&(x.i==y.i)){
        return true;
    }
    return false;
}
complejo multiplicacion(int o,complejo x){
    x.r=x.r*o;
    x.i=x.i*o;
}
