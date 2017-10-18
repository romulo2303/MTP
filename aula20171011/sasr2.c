#include <stdio.h>
#include <stdlib.h>

void par () {
    int i = 0, par = 0;
    for (i = 0; i <= 20; i++, par++)
        if (par % 2 == 0)
        printf("%d, ", par);
        printf("\n");
}
void impar () {
    int i = 0, impar = 0;
    for (i = 0; i <= 20; i++, impar++)
        if (impar % 2 != 0)
        printf("%d, ", impar);
        printf("\n");
}
int main() {
    int ver;
    while (1){
        printf("Informe 1 para ver os numeros impares, 2 para ver os pares e 3 para sair \n");
        scanf("%d", &ver);
        if (ver == 1)
            impar();
        if (ver == 2)
            par();
        if (ver == 3)
            break;
    }
    return EXIT_SUCCESS;
}
