#include <stdio.h>

int main() {
    int linha = 0, estrelas = 1, espacos = 0;

    printf("Informe uma quantidade de linhas: ");
    scanf("%d", &linha);
    
    //o primeiro for serve para identificar e incluir a quantidade de linhas inserida pelo usuario
    for (int i = 0; i < linha; i++) {
        //segundo for serve para inclui o espaco desejado para formar o triangulo
        //inicia a variavel j e atribui o valor da "linha - 1" e este for sera executado enquanto j for maior que espacos
        for (int j = (linha - 1); j > espacos; j--) {
            printf(" ");
        }
        //faz a soma "espacos + 1" e armazena o valor na variavel "espacos"
        //outra forma de fazer eh "espacos = espacos + 1"
        espacos += 1;
        //terceiro for, serve para incluir o desenho do triangulo com asteriscos
        //inicia a variavel j e atribui o valor 0, enquanto j for menor que a quantidade de estrelas o for eh executado
        for (int j = 0; j < estrelas; j++) {
            printf("*");
        }
        //faz a soma "estrelas + 2" e armazena o valor na variavel "estrelas"
        //outra fomra de fazer eh "estrelas = estrelas +2"
        estrelas += 2;
        //imprime a quebra de linha
        printf("\n");
    }

    return 0;
}