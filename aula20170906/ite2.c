#include <stdio.h>//printf
int main(){
    int base, potencia, i, resultado = 1;
    printf("Entre com uma base: \n");
    scanf("%d", &base); getchar();
    printf("Entre com uma potencia: \n");
    scanf("%d", &potencia); getchar();
    for(i = 1; i <= potencia; i++)
        resultado *= base;
    printf("%d", resultado);
    return 0;
}


