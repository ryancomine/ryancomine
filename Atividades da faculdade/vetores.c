#include <stdio.h>

int main() {
    int idade[4];
    float altura[4] = {1.59, 1.65, 1.82};
    
    printf("Insira um numero inteiro\n");
    for (int i = 0; i < 3; i++) {
        printf("%d: ", (i+1));
        scanf("%d", &idade[i]);
    }

    for (int i = 3; i >= 0; i--)
        printf("Idade: %d e Altura: %.2f\n", idade[i], altura[i]);

    return 0;
}