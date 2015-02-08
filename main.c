#include "libreria.h"

int main(int argc, char** argv) {
    float a,b,c,x1,x2;
    
    printf("Inserisci il valore a :");
    scanf("%f",&a);
    printf("Inserisci il valore b :");
    scanf("%f",&b);
    printf("Inserisci il valore c :");
    scanf("%f",&c);
    
    if(esistonoSoluzioniReali(a,b,c)){
        x1 = calcolaSoluzione1(a,b,c);
        x2 = calcolaSoluzione2(a,b,c);
        stampaRisultato(x1,x2);
    }
    else{
        printf("Non esistono soluzioni reali");
    }
    return (EXIT_SUCCESS);
}
