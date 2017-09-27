#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10000
int main(){
    srand(time(0));
    int numeros[N];
    int i, maximo;
    float media = 0.f; //converte em ponto flutuante
    printf("Informe o valor o qual o valor vai variar: \n");
    scanf("%d", &maximo);
    for(i = 0; i < N ; i++){
        numeros[i] = rand()%(maximo +1);
        media += numeros[i];
    }
    media /= N;
    printf("Media dos %d numeros: %f" , N, media);
    return EXIT_SUCCESS;
}
