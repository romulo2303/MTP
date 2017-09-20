#include<stdio.h>
#include<stdlib.h>
#include<complex.h>
#include<math.h>
double complex fazComplexo(double a, double b, char c){
    if(c == 'r')
        return a + I * b;
    else
        return a*cos(b) + I * a*sin(b);
}

int main(){
    double complex Z1;
    double a, b;
    printf("Entre com o numero complexo Z1: real, imaginario\n");
    scanf("%lf, %lf", &a, &b); Z1 = fazComplexo(a,b,'r');
    printf("Multiplicacao pelo conjugado: %.1f ", Z1*conj(Z1)); //mostraComplexo(Z1*conj(Z1) , 'r');
    return EXIT_SUCCESS;
}
