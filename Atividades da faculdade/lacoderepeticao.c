#include <stdio.h>

int main() {
   /*  int x = 1;
    int resultado;
    while (x <= 10)
    {
        resultado = 2 * x;
        printf("2 * %d = %d\n", x, resultado);
        x = x + 1;
    } */

    float metragem1, metragem2, resultado;
    int resposta;

    do {
        printf("Ola, seja bem vindo ao sistema de calculo de area!\n");
        printf("Para comecar, digite a primeira metragem: ");
        scanf("%f", &metragem1);
        printf("Agora informe a segunda metragem: ");
        scanf("%f", &metragem2);
        resultado = metragem1 * metragem2;
        printf("O valor total da area e de %.2f\n", resultado);
        printf("Deseja calcular outras medidas?\n");
        printf("Digite 1 para sim ou digite 2 para parar\n");
        scanf("%d", &resposta);

    } while (resposta == 1);

    
}