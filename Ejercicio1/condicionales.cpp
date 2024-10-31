#include "condicionales.h"
#include <iostream>

using namespace std;

void verificacion() {
    int a;
    cout<<"Ingrese un valor para comprobar si es par o impar: ";
    cin >> a;
    if (a>=0) {
        if(a%2==0) {
            cout<<"El valor es positivo y par"<<endl;
        }else {
            cout<<"El valor es positivo e impar"<<endl;
        }
    }else {
        if(a%2==0) {
            cout<<"El valor es negativo y par"<<endl;
        }else {
            cout<<"El valor es negativo e impar"<<endl;
        }
    }
}