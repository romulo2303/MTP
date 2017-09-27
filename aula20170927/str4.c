#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define N 256
int main(){
    int i;
    char str[N]; char msg[N];
    printf("Entre com uma frase: \n");
    fgets(str,N,stdin); str[strlen(str)-1] = '\0';
    for (i = 0 ; i < N; i++){
        str[i] = toupper(str[i]);
        if (str[i] == 'A')
            str[i] = '4';
        else if (str[i] == 'E')
            str[i] = '3';
        else if (str[i] == 'I')
            str[i] = '1';
        else if (str[i] == 'O')
            str[i] = '0';
        else if (str[i] == 'S')
            str[i] = '5';
        else if (str[i] == 'G')
            str[i] = '9';
    }
    printf("%s", str);
    return EXIT_SUCCESS;
}
