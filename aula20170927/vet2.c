#include<stdio.h>
#include<stdlib.h>
#define N 10
int main(){
    int vet[N], rev[N];
    int i , j;
    printf("Informe 10 numeros: \n");
    for(i = 0; i < N ; i++)
        scanf("%d", &vet[i]);
    for (i = 9, j = 0 ; i >= 0 ; i--, j++)
        rev[j] = vet[i];
    for (i = 0 ; i < N ; i++)
        printf("%d ", rev[i]);
    return EXIT_SUCCESS;
}
