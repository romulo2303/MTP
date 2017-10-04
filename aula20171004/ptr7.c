#include <stdio.h>
#define N 4 //multiplo de sizeof(int)
int main(){
    int vetor[N];
    void * varredura = (void *)vetor;
    int i = 0;
    for(; i < N; i++)
        vetor[i] = 0;
    for (i = 0; i < N ; i++){
        printf("Entre com o elemento %d:\n", i+1);
        scanf("%d", &vetor[i]);
    }
    //for(i = 0; i < N * sizeof(int); i++)
    printf("\nDado: %s", varredura);
    return 0;
}

