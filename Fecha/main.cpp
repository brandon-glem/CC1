#include <iostream>
#include "fecha.h"

using namespace std;

int main()
{
    fecha x(12,11,2018);
    fecha c;

    x.anio_biciesto();
    x.print();
    x.anadir_dias(445);
    x.print();
    return 0;
}
