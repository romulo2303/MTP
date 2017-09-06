#include <stdio.h>//printf
int main(){
    float lado, area;
    printf("Entre com o lado do quadrado: ");
    scanf("%f", &lado);
    //printf("%.3f\n",lado);//computador decide quantas casas usar %g
    area = lado*lado;
    printf("Area do quadrado: %.3f\n", area);
    return 0;
}
