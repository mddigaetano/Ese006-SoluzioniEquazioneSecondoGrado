#include "libreria.h"

int esistonoSoluzioniReali(float a,float b,float c) {
    if (calcolaDelta(a,b,c)<0)
        return 0;
    else
        return 1;
}

float calcolaDelta(float a,float b,float c) {
    float delta;
    delta = (b*b)*(-4*a*c);
    return delta;
}

float calcolaSoluzione1(float a,float b,float c) {
    float risultato;
    risultato = (-b+sqrt(calcolaDelta(a,b,c)))/(2*a);
    return risultato;
}

float calcolaSoluzione2(float a,float b,float c) {
    float risultato;
    risultato = (-b-sqrt(calcolaDelta(a,b,c)))/(2*a);
    return risultato;
}

void stampaRisultato(float x1,float x2){
    printf("x1 = %f\n",x1);
    printf("x2 = %f\n",x2);    
}