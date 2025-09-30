#include <stdio.h>

int main() {
    int num, soma = 0;
    
    printf("Vamos somar alguns números!\n");
    printf("Digite um número: ");
    scanf("%d", &num);
    
    soma += num; //realiza a soma da variável soma + num e atribui o resultado na variável soma
    
    //Laço de repetição com teste no início
    while (num != 0) {
        printf("Digite outro número: ");
        scanf("%d", &num);
        soma += num; //realiza a soma da variável soma + num e atribui o resultado na variável soma
    }
    
    printf("O valor total da soma é: %d", soma);
    
    return 0;
}