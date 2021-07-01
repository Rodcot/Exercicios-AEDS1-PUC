#include <stdio.h>

int main (){

double salario;
printf("Digite o valor do seu salario:\n");
scanf("%lf", &salario);

if( salario < 300 ){
    double total = salario * 1.5;
    printf("O seu salario apos o aumento sera de: %0.2lf", total);
}
else if(salario >= 300 && salario < 500){
    double total = salario * 1.4;
    printf("O seu salario apos o aumento sera de: %0.2lf", total);
}
else if(salario >= 500 && salario < 700){
    double total = salario * 1.3;
    printf("O seu salario apos o aumento sera de: %0.2lf", total);
}
else if(salario >= 700 && salario < 800){
    double total = salario * 1.2;
    printf("O seu salario apos o aumento sera de: %0.2lf", total);
}
else if(salario >= 800 && salario < 1000){
    double total = salario * 1.1;
    printf("O seu salario apos o aumento sera de: %0.2lf", total);
}
else{
    double total = salario * 1.05;
    printf("O seu salario apos o aumento sera de: %0.2lf", total);
}

return 0;
}