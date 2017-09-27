#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 256
int main(){
    int i;
    char str[N], crip[N];
    printf("Entre com uma frase: \n");
    fgets(str,N,stdin); str[strlen(str)-1] = '\0';
    for (i = 0 ; i < N; i++){
        if (str[i] >= 65 && str[i]<= 77 || str[i] >= 97 && str[i]<= 109)
            crip[i]= str[i] + 13;
        else if (str[i] >= 78 && str[i]<= 90 || str[i] >= 110 && str[i]<= 122)
            crip[i] = str[i] - 13;
            else
                crip[i] = str[i];
    }
    printf("%s", crip);
    return EXIT_SUCCESS;
}
