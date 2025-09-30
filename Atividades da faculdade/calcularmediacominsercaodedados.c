#include <stdio.h>

int main() {
    float nota=0, media=0, somanota = 0;
    int qtdeavaliacoes = 0;
    char resposta;
    do {
        printf("Por favor insira o valor da nota do aluno: \n");
        scanf("%f", &nota);
        somanota += nota;
        qtdeavaliacoes += 1;
        printf("Digite qualquer letra para continuar ou digite 's' para sair\n");
        scanf("%s", &resposta);
    } while (resposta != 's');
    media = somanota/qtdeavaliacoes;
    printf("Nota: %.2f\nMedia: %.2f\nQuantidade de avaliacao: %d\n", somanota, media, qtdeavaliacoes);

    return 0;
}