#include <stdio.h>

int main() {
    int num1, num2, num3, soma, subtracao, multiplicacao, divisao;
    
    printf("Insira um número: ");
    scanf("%d", &num1);
    printf("Agora insira outro número: ");
    scanf("%d", &num2);
    printf("Por fim, insira um terceiro número: ");
    scanf("%d", &num3); 
    
    //Soma
    soma = (num1 + num2 + num3);
    printf("\n\nADIÇÃO\n");
    printf("O resultado de %d + %d + %d é igual à %d\n\n", num1, num2, num3, soma) ;
    //Subtração
    subtracao = (num1 - num2 - num3);
    printf("SUBTRAÇÃO\n");
    printf("O resultado de %d - %d - %d é igual à %d\n\n", num1, num2, num3, subtracao);
    //Multiplicação
    multiplicacao = (num1 * num2 * num3);
    printf("MULTIPLICAÇÃO\n");
    printf("O resultado de %d * %d * %d é igual à %d\n\n", num1, num2, num3, multiplicacao);
    //Divisão
    divisao = (num1 / num2 / num3);
    printf("DIVISÃO\n");
    printf("O resultado de %d / %d / %d é igual à %d\n\n", num1, num2, num3, divisao);

    printf("Se o resultado for 0 indica que o resultado é falso.\nCaso o resultado for 1 o resultado é verdadeiro!\n\n");
    //Verificando se o num1 é maior que o num2
    printf("O número %d é maior que o número %d?\n", num1, num2);
    printf("Resultado: %d\n", (num1 > num2));
    //Verificando se o num2 é menor que o num3
    printf("O número %d é menor que o número %d?\n", num2, num3);
    printf("Resultado: %d\n\n", (num2 < num3));
    //Verificando se o num1 é positivo e se o num2 é par, utilizando operadores relacionais e o operador lógico &&
    printf("O número %d é positivo e o número %d é par?\n", num1, num2);
    printf("Resultado: %d\n", ((num1 >= 0) && (num2 % 2 == 0)));
    
    return 0;
}