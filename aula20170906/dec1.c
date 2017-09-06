#include <stdio.h>//printf
int main(){
    int numero;
    printf("Entre com um numero: ");
    scanf("%d", &numero);
    if(numero%2){           //sem o == 0 é perguntando se é impar, ou seja impar
        if(numero%5==0)
            printf("impar; mult. 5\n");
        else printf("impar;\n");
    }
    else{                   // par
        if(numero%3==0||numero%7==0)
            printf("par; mult. 3 ou 7\n");
        else printf("par;\n");
    }
    return 0;
}
