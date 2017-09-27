#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int numeros[1000];
    int i, max = 0, min, lim;
    printf("Informe o valor inteiro positivo entre 1 e 1000: \n");
    scanf("%d", &lim);
    for(i = 0; i < lim ; i++)
        numeros[i] = rand()%(10);
    for (i = 0; i < lim ; i++){
        if(max < numeros[i])
            max = numeros[i];
        if(min > numeros[i])
            min = numeros[i];
    }
    printf("Maximo obtido: %d\nMinimo obtido: %d" , max, min);
    return EXIT_SUCCESS;
}
