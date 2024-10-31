#include "bucle.h"
#include <iostream>
using namespace std;

void suma_for() {
    int c=0,i=0;
    for (i = 1; i <= 50; i++) {
        c=c+i;
    }


    cout << "La suma entre los numeros del 1 al 50 es: " << c << endl;

}

void suma_while() {
    int d=0,e=0;
        while (d<=50) {
            if(d%2==0) {
                e=e+d;
            }
            d++;
        }

    cout << "La suma entre los numeros pares del 1 al 50 es: " << e;
}