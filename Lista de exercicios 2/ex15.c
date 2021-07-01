#include <stdio.h>

int main(){

double valor,total,tipo;
printf("Digite o valor do seu investimento:\n");
scanf("%lf", &valor);
printf("Digite o tipo de investimento (1)Poupanca, (2)Fundos de renda fixa:\n");
scanf("%lf", &tipo);

if(tipo == 1){
    total = valor * 1.03;
    printf("O valor total apos um mes de investimento sera de: %0.2lf", total);
}
else if(tipo == 2){
    total = valor * 1.05;
    printf("O valor total apos um mes de investimento sera de: %0.2lf", total);
}
else{
    printf("ERRO - numero digitado nao e uma opcao valida");
}

return 0;
}