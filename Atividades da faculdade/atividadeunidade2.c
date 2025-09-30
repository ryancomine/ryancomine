#include <stdio.h>

int main() {
    //Sequencia de fibonacci formula: sempre inicia-se com 0 e 1
    //A sequencia da continuidade com a soma dos dois numeros anteriores por exemplo 0 + 1 = 1, sequencia 0 1 1
    //Agora a proxima soma fica 1 + 1 = 2, sequencia 0 1 1 2 e por ai vai, sempre somando com o numero anterior
    int n, x = 0, y = 1, soma;

    printf("Analise de crescimento populacional de Coelhos\n");
    printf("Insira a quantidade de coelhos: ");
    scanf("%d", &n);

    printf("Sequencia: ");
    if (n == 1) {
        printf("%d", x);
    } else if (n == 2 ) {
        printf("%d %d", x, y);
    } else {
        printf("%d %d ", x, y);
        for (int i = 3; i <= n; i++) {
            soma = x + y;
            x = y;
            y = soma;
            printf("%d ", soma);
        }
    }
    printf("\n");

    return 0;
}