#include <stdio.h>//printf
#include<stdlib.h>//rand
#include<time.h>
int main(){
    srand(time(0)); //semente
    int rodada = 1, limite, ponto = 0, soma = 0, d = 0;
    do{
    int dado1 = 1 + rand()%(6 - 1 + 1);
    int dado2 = 1 + rand()%(6 - 1 + 1);
    int dado3 = 1 + rand()%(6 - 1 + 1);
        printf("Informe o limite dos dados nessa rodada: \n");
        scanf("%d", &limite);
        soma = dado1 + dado2 + dado3;
        printf("A soma dos dados foi: %d\n", soma);
        if (limite > 11){
            d = limite - 10;
                if(soma > limite)
                    ponto = ponto - d * (soma - limite);
                else
                    ponto = ponto + (limite - soma )/ d + 1;
        }
        else
            ponto = ponto + (11 - soma);
        rodada++;
    }while (rodada <= 3);
        printf("Sua pontuacao foi: %d\n", ponto);
    return 0;
}
