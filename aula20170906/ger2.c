#include <stdio.h>//printf
int main(){
    int numero, i, soma = 0;
    printf("Entre com um numero: \n");
    scanf("%d", &numero); getchar();
    for(i = 1; i < numero; i++)
        if(numero%i == 0)
        soma += i;
    if(soma == numero)
        printf("Numero perfeito! \n");
    else
        printf("Nao e numero perfeito ... \n");
    return 0;
}

