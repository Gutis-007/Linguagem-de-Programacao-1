/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int num1, num2;
    int i;

    // Solicita os dois números
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Verifica se num1 é menor que num2 e troca seus valores se necessário
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Exibe os múltiplos de 7 entre num1 e num2
    printf("Múltiplos de 7 entre %d e %d:\n", num1, num2);
    for (i = num1; i <= num2; i++) {
        if (i % 7 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}