#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<complex.h>

int main(){
    srand(time(0));
    float exp, esq, dif, cont = 1;
    float rad;
    int i, teste;
    for (i = 0; i < 100; i++){
    rad = 2*M_PI*rand()/(RAND_MAX + 1);
    cont = cexp(I*rad) - (ccos(rad) + (I*csin(rad)));
    printf("%f   |   %f  \n" , cexp(I*rad) , ccos(rad) + (I*csin(rad)));
    dif+=cont;
    }
    printf("Valor da diferenca da identidade: %0.f \n", cont);
    return EXIT_SUCCESS;
}

