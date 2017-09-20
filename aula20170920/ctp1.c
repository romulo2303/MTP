#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define N 256

int main(){
    char frase [N];
    int i;
    printf("Entre com uma frase:\n");
    fgets(frase,N,stdin);
   //enquanto tiver um caracter valido o laço vai continuar, ou poderia usar != '\0'
    for (i = 0; frase[i]; i++){
        frase[i] = toupper(frase[i]);
    }
    printf("%s", frase);
    return EXIT_SUCCESS;
}

