#include <stdio.h>

int main() {
    int tv_2020, tv_2021, tv_2022;
    int notebook_2020, notebook_2021, notebook_2022;
    int smartphone_2020, smartphone_2021, smartphone_2022;
    
    tv_2020 = 800, notebook_2020 = 650, smartphone_2020 = 1500, tv_2021 = 950, notebook_2021 = 550, smartphone_2021 = 1800, tv_2022 = 725, notebook_2022 = 700, smartphone_2022 = 2100;
    
    float media2020 = (tv_2020 + notebook_2020 + smartphone_2020) / 3; 
    float media2021 = (tv_2021 + notebook_2021 + smartphone_2021) / 3;
    float media2022 = (tv_2022 + notebook_2022 + smartphone_2022) / 3;
    
    printf("A media do ano de 2020 eh de: %.2f\n", media2020);
    printf("A media do ano de 2021 eh de: %.2f\n", media2021);
    printf("A media do ano de 2022 eh de: %.2f\n", media2022);
    
    printf("\n1 eh igual a verdadeiro e 0 eh igual a falso\n\n");
    printf("A media de 2020 eh a maior? %d\n", ((media2020 > media2021) && (media2020 > media2021)));
    printf("A media de 2021 eh a maior? %d\n", ((media2021 > media2020) && (media2021 > media2022)));
    printf("A media de 2022 eh a maior? %d\n", ((media2022 > media2020) && (media2022 > media2021)));
    
    
    return 0;
}