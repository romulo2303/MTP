#include <stdio.h>
#define N 16 //multiplo de sizeof(int)
int main(){
    char str[N];
    int * varredura = (int *) str;
    int i = 0;
    for(; i < N; i++)
        str[i] = '\0';
    printf("Entre com texto (%d carac):\n", N-1);
    fgets(str, N, stdin);
    for(i = 0; i < N/sizeof(int); i++)
       printf("\nEnd.: %p => dado: %d (dec), %X (hex)",
              varredura+i, varredura[i],varredura[i]);
    printf("\nCodigo:\n");
    for(i = 0; i < N/sizeof(int); i++) printf("%d ", varredura[i]);
    printf("\n");
    return 0;
}
