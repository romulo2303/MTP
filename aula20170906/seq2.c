#include <stdio.h>//printf
int main(){
    float base, altura, area;
    printf("Entre com a base do triangulo: ");
    scanf("%f", &base);
    printf("Entre com a altura do triangulo: ");
    scanf("%f", &altura);
    //printf("%.3f\n",lado);//computador decide quantas casas usar %g
    area = (base*altura)/2;
    printf("Area do triangulo: %.2f\n", area);
    return 0;
}

