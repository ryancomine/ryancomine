#include <stdio.h>

int main() {
     float salario_colaborador, descontoINSS, descontoIR;
     
     printf("Informe o seu salario logo abaixo:\n");
     scanf("%f", &salario_colaborador);
     
     
     //calcula o desconto do INSS de acordo com o salario
     if (salario_colaborador <= 1320) {
         descontoINSS = 0.075;
     } else if (salario_colaborador >= 1320.01 && salario_colaborador <= 2571.29) {
         descontoINSS = 0.09;
     } else if (salario_colaborador >= 2571.30 && salario_colaborador <= 3856.94) {
         descontoINSS = 0.12;
     } else {
         descontoINSS = 0.14;
     }
     
     //Calcula o dsconto do IR de acordo com o salario
     if (salario_colaborador <= 1903.98) {
         descontoIR = 0;
     } else if (salario_colaborador >= 1903.99 && salario_colaborador <= 2826.65) {
         descontoIR = 0.075;
     } else if (salario_colaborador >= 2826.66 && salario_colaborador <= 3751.05) {
         descontoIR = 0.15;
     } else if (salario_colaborador >= 3751.06 && salario_colaborador <= 4664.67) {
         descontoIR = 0.225;
     } else {
         descontoIR = 0.275;
     }
     
     printf("Desconto INSS em porcentagem: %.2f \nDesconto INSS em Real: R$ %.2f \n\n", (descontoINSS * 100), (salario_colaborador * descontoINSS));
     printf("Desconto Imposto de Renda em porcentagem: %.2f \nDesconto Imposto de Renda em Real: R$ %.2f \n\n", (descontoIR * 100), (salario_colaborador * descontoIR));
     printf("Salario Bruto: R$ %.2f \n", salario_colaborador);
     printf("Salario Liquido: R$ %.2f \n", (salario_colaborador - (salario_colaborador * descontoINSS) - (salario_colaborador * descontoIR)));
     
     return 0;
}
