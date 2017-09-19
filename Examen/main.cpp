#include <iostream>

using namespace std;

void espiral(const int esp[][],int tam){

for(int j=0;j<tam;j++){
    cout<< esp[0][j];
}
for(int i=1;i<tam-1;i++){
    cout<< esp[i][tam-1];
}
for(int i=tam-1;i>0;i--){
    cout<< esp[i][tam-1];
}
for(int i=tam-1;i>0;i--){
    cout<< esp[i][0];
}
for(int j=1;j<tam-1;j++){
    cout<< esp[1][j];
}
for(int i=2;i<tam-2;i++){
    cout<< esp[i][tam-2];
}
for(int i=tam-2;i>1;i--){
    cout<< esp[i][tam-2];
}
}

int suma(const int lista[],int tam){
    int r = 0;
    if((tam-1)==0){
        r += lista[0];
    }
    else
        r = lista[tam-1] + suma(lista,tam-1);
    return r;
}

void reverza(int lista[],int tam){
    int indi=tam-1,ulti;
    for(int i=0;i<(tam/2);i++){
        ulti=lista[i];
        lista[i]=lista[indi];
        lista[indi]=ulti;
        indi=indi-1;
    }
}

int main()
{
//    int matriz[]={1,2,3,4,5},tam=5;
//    cout<<suma(matriz,5);
//    return 0;

//    int matriz[]={1,2,3,4,5},tam=5;
//    reverza(matriz,5);
//    for(int j=0;j<tam;j++){
//        cout<<matriz[j];
//    }
//    return 0;

//char listado[]={'H','o','l','a',',','V','o','y','a',' ','t','e','r','m','i','n','a','r',' ','m','i','s',' ','t','a','r','e','a','s','!','C','e',
//'r','r','a','r','é',' ','e','l',' ','F','a','c','e','b','o','o','k',' ','y',' ','W','h','a','t','s','A','p','p','!','B','y','e',','};
//cout<<'\t'<<listado[15];
int matriz[][]={{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24}};
espiral(matriz,4);
return 0;
}
