#include <stdio.h>

int main(){

    float C1, F1, C2, F2;

    //PARTE I
    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &C1);
    F1 = (C1 * 1.8) + 32;
    printf("Convertendo %.1f graus Celsius para Fahrenheit temos: %.1f", C1, F1);
    //PARTE II
    printf("\nInforme a temperatura em Fahrenheit: ");
    scanf("%f", &F2);
    C2 = (F2 - 32) / 1.8;
    printf("Convertendo %.1f graus Fahrenheit para Celsius temos: %.1f", F2, C2);

    return 0;
}
