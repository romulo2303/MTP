#include <stdio.h>//printf
#include<stdlib.h>//rand
#include<time.h>
int main(){
    srand(time(0)); //semente
    int x = rand()%100;
    int y = 101 + rand()%(293 - 101+1); //menor+(maior-menor)*randomico
    printf("Entre 0 e 99   : %d\n", x);
    printf("Entre 101 e 293: %d\n", y);
    return 0;
}
