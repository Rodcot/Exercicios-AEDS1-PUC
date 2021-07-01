#include <stdio.h>

int main(){

int opnion,i, otimoCount = 0, otimoAgeTotal = 0, age, regularCount = 0, goodCount = 0;

for(i = 1; i < 16; i++){
    printf("Escolha entre: 3 - otimo, 2 - bom, 1 - regular, para representar a opniao da %d pessoa sobre o filme e, em seguida, digite sua idade:\n", i);
    scanf("%d %d", &opnion, &age);

    if(opnion == 3){
        otimoAgeTotal =  otimoAgeTotal + age;
        otimoCount++;      
    }
    if(opnion == 1){
        regularCount++;
    }
    if(opnion == 2){
        goodCount++;
    }
    if(opnion != 1 && opnion != 2 && opnion != 3){
        printf("ERRO - Valor invalido digitado\n");
        goto ERROR;
    }
}
double otimoAverage = otimoAgeTotal / otimoCount;
double goodPercentage = 100 * goodCount / 15;

printf("A media das idades das pessoas que responderam otimo e de: %0.1lf\n", otimoAverage);
printf("A quantidade de pessoas que responderam regular e de: %d\n", regularCount);
printf("A porcentagem de pessoas que responderam bom, entre todos os espectadores e de: %0.1lf\n", goodPercentage);

ERROR:

return 0;
}