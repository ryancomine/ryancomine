#include <stdio.h>

int main() {
    float num1, num2, media;
    
    printf("Digite a sua nota a seguir para calcularmos a sua media:\n");
    scanf("%f", &num1);
    printf("\nAgora digite a segunda nota:\n");
    scanf("%f", &num2);
    media = (num1 + num2)/2;
    printf("A sua media eh de: %.2f", media);
    
    return 0;
}