#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned char * pont1, * pont2, * pont3; //aponta para bytes
    int nbytes, i;
    float n1, n2, cont = 0;
    printf("Informe dois numero: \n");
    scanf("%f, %f", &n1, &n2);
    cont = n1 + n2;
    pont1 = (unsigned char *) &n1;
    pont2 = (unsigned char *) &n2;
    pont3 = (unsigned char *) &cont;
    printf("\nEnd. primeiro numero: %p, %.2f; \nEnd. segundo numero: %p, %.2f; \nEnd. soma dosnumeros: %p, %.2f", pont1, n1, pont2, n2, pont3, cont);
    return EXIT_SUCCESS;
}



