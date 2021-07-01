#include <stdio.h>

int main (){

double preco,total;
printf("Digite o valor do preco do produto:\n");
scanf("%lf", &preco);

if( preco <= 50 ){
    total = preco * 1.05;
}
else if( preco > 50 && preco < 100){
    total = preco * 1.1;
}
else{
    total = preco * 1.15;
}

if(total <= 80){
    printf("O novo preco e de: %0.2lf classificado como Barato", total);
}
else if(total > 80 && total <= 120){
    printf("O novo preco e de: %0.2lf classificado como Normal", total);
}
else if(total > 120 && total <= 200){
    printf("O novo preco e de: %0.2lf classificado como Caro", total);
}
else{
    printf("O novo preco e de: %0.2lf classificado como Muito Caro", total);
}

return 0;
}