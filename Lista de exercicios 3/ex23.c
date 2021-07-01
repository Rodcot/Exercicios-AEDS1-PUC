#include <stdio.h>

int main(){

int option,i,salary,months;
double newSalary;

for(;;){
    LOOP:
    printf("Escolha uma das opcoes:\n1.Novo Salario\n2.Ferias\n3.Decimo terceiro\n4.Sair\n");
    scanf("%d", &option);

    if(option == 1){
        printf("Digite o seu salario:\n");
        scanf("%d", &salary);
        if(salary <= 210){
            newSalary = salary * 1.15;
        }
        else if(salary > 210 && salary <= 600){
            newSalary = salary * 1.1;
        }
        else{
            newSalary = salary * 1.05;
        }
        printf("Seu novo salario e de: %0.1lf\n", newSalary);
    }
    else if(option == 2){
        printf("Digite o seu salario:\n");
        scanf("%d", &salary);
        newSalary = salary + (salary / 3);
        printf("O valor de suas ferias e de: %0.1lf\n", newSalary);
    }
    else if(option == 3){
        printf("Digite o seu salario e o numero de meses de trabalho na empresa:\n");
        scanf("%d %d", &salary, &months);
        if (months > 12){
            months = 12;
        }
        newSalary = (salary * months) / 12;
        printf("O valor do seu decimo terceiro e de: %0.1lf\n", newSalary);
    }
     else if(option == 4){
        printf("Opcao sair escolhida com sucesso.\n");
        goto LEAVE;
    }
    else{
        printf("ERROR - Opcao invalida.\n");
        goto LOOP;
    }
}

LEAVE:
return 0;
}