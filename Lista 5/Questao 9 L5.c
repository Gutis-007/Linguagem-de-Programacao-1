#include <stdio.h>

int main() {
    int faltas, alunos_participantes = 0, total_faltas = 0;

    printf("Digite a quantidade de faltas dos alunos (-1 para encerrar):\n");

    while (1) {
        printf("Aluno %d: ", alunos_participantes + 1);
        scanf("%d", &faltas);

        if (faltas == -1) {
            break;
        }

        if (faltas >= 0) {
            total_faltas += faltas;
            alunos_participantes++;
        } else {
            printf("Quantidade inválida de faltas. Digite novamente.\n");
        }
    }

    if (alunos_participantes > 0) {
        float media_faltas = (float)total_faltas / alunos_participantes;
        printf("Quantidade média de faltas: %.2f\n", media_faltas);
    } else {
        printf("Nenhum aluno participou da pesquisa.\n");
    }

    printf("Número de alunos que participaram da pesquisa: %d\n", alunos_participantes);

    return 0;
}
