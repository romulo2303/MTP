#include <stdio.h>//printf
int main(){
    int numero, i;
    printf("Entre com um numero: \n");
    scanf("%d", &numero); getchar();
    for(i = 2; i < numero; i++)
        if(numero%i == 0)
            break;
    if(i == numero)
        printf("Primo! \n");
    else
        printf("Nao e primo ... \n");
    return 0;
}


