#include<stdio.h>
#include<stdlib.h>
#define N 10
int main(){
    int vet[N];
    int i , soma = 0, prod = 1;
    printf("Informe 10 numeros: \n");
    for(i = 0; i < N ; i++)
        scanf("%d", &vet[i]);
    for (i = 0 ; i < N ; i++){
        soma+= vet[i];
        prod*= vet[i];
    }
    printf("Somatorio do vetor: %d\nProdutorio do vetor:  %d\n", soma, prod);
    return EXIT_SUCCESS;
}
