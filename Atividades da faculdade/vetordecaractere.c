#include <stdio.h>

int main() {
    char CPF[15];
    
    printf("Iforme seu CPF: ");
    scanf("%s", CPF);

    for (int i = 0; i < 15; i++) {
        if (CPF[i] == '.'|| CPF[i] == '-') {
            continue;
        }
        printf("%c", CPF[i]);
    }

    printf("\n");

    return 0;
}