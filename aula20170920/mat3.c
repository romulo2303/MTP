#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
    float numero, base, logt;
    printf("Entre com o numero e a base: numero, base \n");
    scanf("%f , %f", &numero, &base);
    logt = log10(numero)/log10(base);
    printf("A distancia entre os pontos = %.4f\n", logt);
    return EXIT_SUCCESS;
}
