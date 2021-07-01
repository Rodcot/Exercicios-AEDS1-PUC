#include <stdio.h>

int main(){

int i;
double price = 0,finalPrice = 0, installmentPrice = 0,installmentePercent = 0.03;

printf("Digite o valor do carro:\n");
scanf("%lf", &price);

printf("\n");
double priceNoInstallment = price * 0.8;
printf("Compra a vista - %0.2lf\n", priceNoInstallment);

printf("Preco Final / Quantidade de Parcelas / Valor da Parcela\n");

for(i = 6; i < 61;){
    
    installmentPrice = price * installmentePercent;
    finalPrice = price + installmentPrice;

    printf("   %0.2lf    /         %d       /   %0.2lf   \n", finalPrice, i, installmentPrice);

    installmentePercent = installmentePercent + 0.03;
    i = i + 6;
}

return 0;
}