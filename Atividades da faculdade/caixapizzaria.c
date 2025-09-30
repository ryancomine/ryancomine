#include <stdio.h>

int main() {
    float totalConta, desconto, totalCadaPessoa;
    int qtdePessoas;
    desconto = 0.15;
    
    printf("Calculando o valor total da compra... (insira o total da compra abaixo)\n");
    scanf("%f", &totalConta);
    printf("Ola o valor total da conta eh de %.2f reais! Por quantas pessoas sera divida a conta?\n", totalConta);    
    scanf("%d", &qtdePessoas);
    float soma = ((totalConta - (totalConta * desconto)) / qtdePessoas);
    printf("Certo, entao o valor da conta dividida por %d pessoas resulta em %.2f reais para cada. Com desconto aplicado de %.2f", qtdePessoas, soma, desconto);
    return 0;
}