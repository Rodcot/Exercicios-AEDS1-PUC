#include <stdio.h>

int main(){

int i,price;
char itemCode;
double firstInstallment;
int Vtotal = 0, Ptotal = 0, realTotal = 0;

for(i = 1; i < 16; i++){
    
    printf("Digite o preco do %d item:\n", i);
    scanf("%d",&price);
    printf("Digite o codigo do item(P - prazo;V - a vista): \n");
    scanf(" %c", &itemCode);

    if(itemCode == 'V' || itemCode == 'v'){
        Vtotal = Vtotal + price;
    }
    else if(itemCode == 'P' || itemCode == 'p'){
        Ptotal = Ptotal + price;
    }
    else{
        printf("ERRO - preco ou codigo foram inseridos de forma errada.\n");
        goto ERRO;
    }
}
realTotal = Ptotal + Vtotal;

printf("O preco total das compras a vista foi de: %d\n", Vtotal);
printf("O preco total das compras a prazo foi de: %d\n", Ptotal);
printf("O preco total de todas as transacoes foi de: %d\n", realTotal);

firstInstallment = Ptotal / 3;
printf("A primeria prestacao das compras a prazo juntas e de: %0.2lf\n", firstInstallment);

ERRO:

return 0;
}