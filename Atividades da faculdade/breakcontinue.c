#include <stdio.h>

int main() {
    int qtdeAlunos = 0, qtdeDisciplinas = 0, soma = 0;
    
    printf("Insira o numero de disciplinas: ");
    scanf("%d", &qtdeDisciplinas);

    for (int i = 0; i < qtdeDisciplinas; i++) {
        printf("Insira a quantidade de alunos matriculados nesta disciplina: ");
        scanf("%d", &qtdeAlunos);
        if (qtdeAlunos <= 0) {
            printf("Quantidade de alunos invalida!\n");
            i--; //solucao do exercicio, serve para voltar 1 disciplina. Achei babadeiro
            continue;
        }
        soma += qtdeAlunos;
        if (soma >= 200) {
            printf("Excedeu a quantidade de alunos");
            break;
        }
        
    }
    
    printf("\nDisciplinas: %d\nAlunos: %d\n", qtdeDisciplinas, soma);

    return 0;
}