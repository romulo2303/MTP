#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define N 256

int main(){
    char frase [N];
    int i, carac=0;
    printf("Entre com uma frase:\n");
    fgets(frase,N,stdin);
   //enquanto tiver um caracter valido o laço vai continuar, ou poderia usar != '\0'
    for (i = 0; frase[i]; i++){
        if(isalpha(frase[i]))
            carac++;
    }
    printf("%d", carac);
    return EXIT_SUCCESS;
}
