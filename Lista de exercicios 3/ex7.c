#include <stdio.h>

int main(){

int i, age, weight, heightCount = 0;
double height, weightPorcentage, heightTotal = 0, heightAverage = 0;
int elderlyTotal = 0, littleWeight = 0;

for(i = 1; i < 6; i++){

    printf("Digite a idade, altura e peso em sequencia da %d pessoa:\n", i);
    scanf("%d %lf %d", &age, &height, &weight);

    if(age > 50){
        elderlyTotal++;
    }
    if(age >= 10 && age <= 20){
        heightTotal = heightTotal + height;
        heightCount++;
    }
    if(weight < 40){
        littleWeight++;
    }
}

heightAverage = heightTotal / heightCount;
weightPorcentage = 100 * littleWeight / 5;

printf("A quantidade de pessoas com idade superior a 50 anos e de: %d\n", elderlyTotal);
printf("A media das alturas das pessoas com idade entre 10 e 20 anos e de: %0.2lf\n", heightAverage);
printf("A porcentagem de pessoas com peso inferior a 40kg dentro do total avaliado e de: %0.1lf\n", weightPorcentage);

return 0;
}