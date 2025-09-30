#include <stdio.h>

#define imposto 0.10

int main() {
    const float desconto = 0.05;
    float valor = 1500;
    float precofinal = valor + (valor * imposto) - (valor * desconto);
    
    printf("Preco final do produtto eh de: R$ %.2f", precofinal);
    
    return 0;
}