#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;
    double x,y;
    cout<<"ingrese numero: ";
    cin>>a;
    x=double(sqrt(a));
    cout<<x<<endl;
    y=double(x/2);
    cout<<y<<endl;
    if(y==0){
        cout<<"la raiz de "<<a<<" es multiplo de 2";
    }
    else{
            cout<<"la raiz de "<<a<<" no es multiplo de 2";
    }
    return 0;
}
