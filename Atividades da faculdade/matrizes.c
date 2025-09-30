#include <stdio.h>

int main() {
    float notas[3][6], mediamath = 0, mediaport = 0, mediacien = 0, somanotastotal = 0;
    
    printf("Sistema de notas dos alunos\n");
    
    for (int i = 0; i < 3; i++) {
        printf("Notas aluno %d\n", (i + 1));
        for (int j = 0;j < 6; j++) {
            switch (j) {
            case 0:
            printf("Matematica 1: ");
                break;
            case 1:
            printf("Matematica 2: ");
                break;
            case 2:
            printf("Portugues 1: ");
                break;
            case 3:
            printf("Portugues 2: ");
                break;
            case 4:
            printf("Ciencia 1: ");
                break;
            case 5:
            printf("Ciencia 2: ");
                break;
            default:
                break;
            }
            scanf("%f", &notas[i][j]);
        }
    }

    printf("tabela de notas: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++)
        {
            printf("| %05.2f ", notas[i][j]);
        }
        printf("| \n");
    }

    printf("\nMedia por disciplina: \n");

    for (int i = 0; i < 3; i++) {
        printf("Medias por disciplina do aluno %d\n", (i + 1));
        mediamath = (notas[i][0] + notas[i][1]) / 2;
        mediaport = (notas[i][2] + notas[i][3]) / 2;
        mediacien = (notas[i][4] + notas[i][5]) / 2;
        printf("Media em matematica: %05.2f\n", mediamath);
        printf("Media em portugues: %05.2f\n", mediaport);
        printf("Media em ciencia: %05.2f\n", mediacien);
        printf("\n");
    }
    
    printf("Valor da media geral\n");

    for (int i = 0; i < 3; i++)  {
        printf("Media total do aluno %d: ", (i + 1));
        for (int j = 0; j < 6; j++) {
            somanotastotal += notas[i][j];
        }
        printf("%05.2f", (somanotastotal / 6));
        printf("\n");
    }

    return 0;
}