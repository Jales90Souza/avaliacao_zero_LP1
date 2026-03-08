#include <stdio.h>

int main(){

    int V[5], i, soma = 0;

    printf("Informe 5 numeros inteiros: \n");
    for(i=0; i<5; i++){
        scanf("%d", &V[i]);
    }
    for(i=0; i<5; i++){
        soma += V[i];
    }
    printf("A soma dos 5 numeros eh: %d", soma);

    return 0;
}
