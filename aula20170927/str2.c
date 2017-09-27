#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 256
int main(){
    int i, V = 0, C = 0, D = 0, E = 0;
    char str[N];
    printf("Entre com uma frase: \n");
    fgets(str,N,stdin); str[strlen(str)-1] = '\0';
    for (i = 0 ; i < N; i++){
       if(str[i] >= 'B' && str[i] <= 'D' || str[i] >= 'F' && str[i] <= 'H' ||
          str[i] >= 'J' && str[i] <= 'N' || str[i] >= 'P' && str[i] <= 'T' ||
          str[i] >= 'V' && str[i] <= 'Z' || str[i] >= 'b' && str[i] <= 'd' ||
          str[i] >= 'f' && str[i] <= 'h' || str[i] >= 'j' && str[i] <= 'n' ||
          str[i] >= 'p' && str[i] <= 't' ||str[i] >= 'v' && str[i] <= 'z')
            C++;
       else {
            if(str[i] == 'A' ||str[i] == 'E' ||str[i] == 'I' ||str[i] == 'O' ||
               str[i] == 'U' ||str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||
               str[i] == 'o' ||str[i] == 'u')
                V++;
            else{
                if(str[i] >= '0' && str[i] <= '9' )
                    D++;
                else{
                    if(str[i] == ' ')
                        E++;
                }
            }
       }
    if(str[i]== '\0')
            break;
    }
    printf("V: %d;C: %d;D: %d;E: %d", V, C, D, E);
    return EXIT_SUCCESS;
}
