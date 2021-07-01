#include <stdio.h>
int main() {

    int food,portion1,portion2;
    printf("Digite a quantidade de comida no saco em kg:\n");
    scanf("%d", &food);
    printf("Digite as quantidades de ração que são dadas para cada gato em gramas:\n");
    scanf("%d %d", &portion1, &portion2);

    int totalfood = portion1 + portion2;
    int foodgrams = food * 1000;
    int foodleft = foodgrams - ((totalfood) * 5);
    float prediction = foodleft / totalfood;
    
    if (foodleft > 0)
    {
        printf("Sobrarão %d gramas de ração em 5 dias, isso será o suficiente para apenas mais %0.1f dias", foodleft, prediction);
    } else {
        printf("Você não tem quantidade de ração para 5 dias");
    }
    

return 0;
}