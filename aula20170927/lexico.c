#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define N 256
int main(){
    int i, j;
    char str[5][N], ordem[5][N];
    for(i = 0; i < 5 ; i++){
        printf("Informe a palavra %d: ", i+1);
        fgets(str[i],N,stdin); str[i][strlen(str[i])-1] = '\0';
    }
    for(i = 0; i < 4; i++){
            for( j = i + 1 ; j < 5; j++)
        if(strcmp(str[i],str[j]) < 0)
        ordem[j] = str[i];
    }
    for(i = 0; i < 5; i++)
    printf("%s \n", ordem[i]);
    return EXIT_SUCCESS;
}
