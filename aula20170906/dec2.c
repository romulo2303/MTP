#include <stdio.h>//printf
#include<stdlib.h>//rand
#include<time.h>//time
int main(){
    srand(time(0)); //semente
    int divisor, pontuacao=0, soma, multiplicacao;
    int x = rand()%100;
    int y = 1328 + rand()%(1360 - 1328 + 1); //menor+(maior-menor)*randomico
    printf("Informe um dos divisores de 8192: \n");
    scanf("%d", &divisor);
    if(8192%divisor==0)
        pontuacao++;
    printf("Faca a soma %d + 101 e informe o resultado: \n", y);
    scanf("%d", &soma);
    if(soma == y + 101)
        pontuacao++;
    printf("Faca a multiplicacao %d*3 e informe o resultado: \n", x);
    scanf("%d", &multiplicacao);
    if(multiplicacao == x * 3)
        pontuacao++;
    printf("Sua pontuacao foi: %d\n", pontuacao);
    return 0;
}
