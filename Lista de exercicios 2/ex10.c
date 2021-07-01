#include <stdio.h>

int main (){

double custo;
printf("Digite o valor do custo da fabrica:\n");
scanf("%lf", &custo);

if( custo <= 12000 ){
    double total = custo * 1.05;
    printf("O preco total sera: %0.2lf", total);
}
else if( custo > 12000 && custo < 25000){
    double total = custo + ((custo * 1.1) - custo) + ((custo * 1.15) - custo);
    printf("O preco total sera: %0.2lf", total);
}
else{
    double total = custo + ((custo * 1.15) - custo) + ((custo * 1.2) - custo);
    printf("O preco total sera: %0.2lf", total);
}

return 0;
}