#include <stdio.h>

int main(){

double clientCode, amount, revenue = 0, totalAmount = 0, totalRevenue = 0;
int option;

for(;;){
    LOOP:
    printf("Digite o codigo do cliente, ou 0 para finalizar o programa:\n");
    scanf("%lf", &clientCode);
    
    if(clientCode <= 0){
        printf("Programa finalizando.\n");
        goto LEAVE;
    }

    printf("Digite o tipo de investimento\n1.Poupanca\n2.Poupanca plus\n3.Fundos de renda fixa\n");
    scanf("%d", &option);
    printf("Digite o valor investido:\n");
    scanf("%lf", &amount);

    if(option == 1){
        revenue = amount * 1.015;
    }
    else if(option == 2){
        revenue = amount * 1.02;
    }
    else if(option == 3){
        revenue = amount * 1.04;
    }
    else{
        printf("ERROR - Valor digitado invalido.\n");
        goto LOOP;
    }

printf("O rendimento do valor investido e de: %0.1lf\n", revenue);
totalAmount = totalAmount + amount;
totalRevenue = totalRevenue + revenue;
}
LEAVE:

printf("O total investido foi de: %0.1lf\n", totalAmount);
printf("O total de rendimento mensal foi de: %0.1lf\n", totalRevenue);

return 0;
}