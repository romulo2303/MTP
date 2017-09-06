#include <stdio.h>//printf
int main(){
    int numero, i, fatorial = 1;
    printf("Entre com um numero: \n");
    scanf("%d", &numero); getchar();
    for(i = 0; i<numero; i++)
        fatorial *= (numero-i);
    printf("%d! = %d\n", numero, fatorial);
    return 0;
}


