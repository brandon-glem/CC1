#include <iostream>

using namespace std;

void copia(char *s1,char *s2){
//    int i=0;
//    while(s1[i]!='\0'){
//        s2[i]=s1[i];
//        i++;
//    }
//    s2[i]='\0';
    while((*s2++ = *s1++) != '\0'){
    }
}

int main()
{
    char uno[]="cien";
    char dos[10];
    int i=0;
    copia(uno,dos);
    cout<<"dos[]=";
   /* while(uno[i]!= '\0'){
        cout<<dos[i];
        i++;
    }*/
    cout<<dos;
    return 0;
}
