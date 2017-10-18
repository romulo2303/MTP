#include <stdio.h>
#include<stdlib.h>

int divisor(int num1, int num2, int *divisao, int *resto){
      *divisao =  num1 /  num2;
      *resto =  num1 %  num2;
}

int main(){
    int num1, num2, div, res;
    printf("Entre com um numero inteiro para saber o quociente: ");
    scanf("%d,%d", &num1, &num2);
    divisor(num1, num2, &div, &res);
    printf("%d , %d \n", div, res );
    return EXIT_SUCCESS;
}

