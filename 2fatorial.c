#include <stdio.h>

int main(){

    int n, i, fat = 1;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    for(i=n; i>=1; i--){
        fat *= i;
    }
    printf("O fatorial de %d eh: %d", n, fat);

    return 0;
}
