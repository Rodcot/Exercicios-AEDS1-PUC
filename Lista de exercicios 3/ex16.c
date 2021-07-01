#include <stdio.h>

int main(){

int count = 1, age, totalAge = 0,ageCount = 0;
double ageAverage;

for(;;){
    LOOP:
    printf("Digite a idade da %d pessoa, ou 0 para finalizar o programa:\n", count);
    scanf("%d", &age);

    if(age == 0){
        printf("Opcao 0 - O programa sera finalizado.\n");
        goto END;
    }
    if(age < 0){
        printf("ERROR - Idade digitada invalida.\n");
        goto LOOP;
    }
    if(age > 0){
        totalAge = totalAge + age;
        ageCount++;
    }

count++;    
}
END:

ageAverage = totalAge / ageCount;
printf("A media das idades digitadas foi de: %0.1lf", ageAverage);

return 0;
}