#include<stdio.h>
#include<stdlib.h>
#include "matriz.h"

int main(){
    Matriz A, B, I, R;
    int l;
    printf("Entre com a quantidade de linhas da regressao\n");
    scanf("%d", &l);
    A = criarMatriz(l, 3);
    preencherMatrizReg(A);
    B = criarMatriz(l, 1);
    preencherMatriz(B);
    I = InversaRet(A);
    R = multiplicaMat(I,B);
    imprimirSis(R);
    destruirMatriz(A);
    destruirMatriz(B);
    destruirMatriz(I);
    destruirMatriz(R);
    return EXIT_SUCCESS;
}

