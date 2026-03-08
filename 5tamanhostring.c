#include <stdio.h>
#include <string.h>

int main(){

    char Nome[100];
    int n;
    printf("Informe seu nome completo: ");
    fgets(Nome, 100, stdin);
    n = strlen(Nome) - 1;
    printf("O numero de caracteres de %s eh: %d", Nome, n);

    return 0;
}
