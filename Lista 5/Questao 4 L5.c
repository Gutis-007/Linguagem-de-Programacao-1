#include <stdio.h>

int main() {
    float nota_final;

    while (1) {
        printf("Digite a nota final do aluno (digite um valor fora do intervalo de 0 a 10 para encerrar): ");
        scanf("%f", &nota_final);

        if (nota_final < 0 || nota_final > 10) {
            printf("Nota final fora do intervalo. Encerrando o programa...\n");
            break;
        }

        if (nota_final >= 7) {
            printf("Situação: APROVADO\n");
        } else if (nota_final >= 4) {
            printf("Situação: EM EXAME\n");
        } else {
            printf("Situação: REPROVADO\n");
        }
    }

    return 0;
}

