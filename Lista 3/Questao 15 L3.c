/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    
    int valor;
    printf("Informe o valor em reais: ");
    scanf("%d", &valor);

   
    int notas_100 = valor / 100;
    int resto_100 = valor % 100;

    int notas_50 = resto_100 / 50;
    int resto_50 = resto_100 % 50;

    int notas_10 = resto_50 / 10;
    int resto_10 = resto_50 % 10;

    int notas_5 = resto_10 / 5;
    int resto_5 = resto_10 % 5;

    int notas_1 = resto_5 / 1;

    
    printf("Valor informado: R$ %d\n", valor);
    printf("Notas de R$ 100: %d\n", notas_100);
    printf("Notas de R$ 50: %d\n", notas_50);
    printf("Notas de R$ 10: %d\n", notas_10);
    printf("Notas de R$ 5: %d\n", notas_5);
    printf("Notas de R$ 1: %d\n", notas_1);

    return 0;
}