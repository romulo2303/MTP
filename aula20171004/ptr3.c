#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[] = {0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF};
    unsigned char * ponteiro; //aponta para bytes
    int nbytes = sizeof(vetor);
    int i, cont = 0;
    printf("End. inicial de vetor: %p\n",vetor);
    for(i = 0, ponteiro = (unsigned char *) vetor; i < nbytes ; i++){
        if (ponteiro[i]) cont++; //contagem somente se todo o conteudo for zero
        //if(*(ponteiro+i) == 0x00) cont++;
        printf("End.: %p, dado: %d, %X\n", ponteiro+i, *(ponteiro+i), ponteiro[i]);
    }
    printf("\nDe %d Bytes, %d estao com pelo menos 0x01. \n", nbytes, cont);
    return EXIT_SUCCESS;
}


