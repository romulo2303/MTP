#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
    float x1, x2, y1, y2, dist;
    printf("Entre com as cordenadas x1, y1: ");
    scanf("%f , %f", &x1, &y1);
    printf("Entre com as cordenadas x2, y2: ");
    scanf("%f , %f", &x2, &y2);
    dist = sqrt(pow(x2-x1,2)+pow(y2-y1, 2));
    printf("A distancia entre os pontos = %f\n", dist);
    return EXIT_SUCCESS;
}
