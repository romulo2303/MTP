#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(){
    int numero, i;
    long long int fatorial = 1;
    printf("Entre com um numero: \n");
    scanf("%d", &numero); getchar();
    for(i = 0; i<numero; i++)
        fatorial *= (numero-i);
    printf("%d! = %lld\n", numero, fatorial);
    return 0;
}


