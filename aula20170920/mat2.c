#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
    float A, b, c, a;
    printf("Entre com pelo menos dois lados do triangulo e um angulo: b,c,A\n");
    scanf("%f , %f , %f", &b, &c, &A);
    a = sqrt(pow(b,2)+pow(c, 2) - 2*b*c*cos(A));
    printf("O valor de a eh = %f\n", a);
    return EXIT_SUCCESS;
}
