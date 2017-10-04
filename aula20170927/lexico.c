#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define N 256 // Tamanho maximo das STRINGS
#define LIM 7 //Quantidade de palavras para organizar
int main(){
    int i, j, pos = 0, vecpos[LIM];
    char str[LIM][N], ordem[LIM][N];
    for(i = 0; i < LIM ; i++){
        printf("Informe a palavra %d: ", i+1);
        fgets(str[i],N,stdin); str[i][strlen(str[i])-1] = '\0';
        vecpos[i] = 1;
    }
    for (i = 0; i < LIM; i++) //Normalizando as palavras
        for(j = 0 ; j < N; j++)
        str[i][j] = tolower(str[i][j]);
    for (i = 0; i < LIM; i++) //Frescura para colocar a primeira maiscula
        str[i][0] = toupper(str[i][0]);
    for(i = 0; i < LIM; i++){
        pos = 0;
        for(j = 0 ; j < LIM; j++)
            if(strcmp(str[i],str[j]) > 0
               || (strcmp(str[i],str[j]) == 0 && !vecpos[pos+1]))

                pos++;
        strcpy(ordem[pos],str[i]);
        vecpos[pos] = 0;
    }
    for(i = 0; i < LIM; i++)
    printf("\n------------------\n%s", ordem[i]);
    printf("\n------------------\n");
    return EXIT_SUCCESS;
}
