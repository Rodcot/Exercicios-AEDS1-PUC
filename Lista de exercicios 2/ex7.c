#include <stdio.h>

int main(){

double salario;
printf("Digite o valor do seu salario:\n");
scanf("%lf", &salario);

if (salario < 500){
    double adjustment = salario * 1.3;
    printf("Seu salario apos o reajuste e de: %0.2lf", adjustment);
}
else{
    printf("Seu salario nao te da direito ao reajuste");
}

return 0 ;
}