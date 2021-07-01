#include <stdio.h>

int main(){

char type;
int count = 1, sellingPrice, buyingPrice, bigProfit = 0, smallProfit = 0, totalProfit = 0, profit = 0;


for(;;){
    printf("Digite o tipo da acao, ou F para sair:\n");
    scanf(" %c", &type);

    if(type == 'F' || type == 'f'){
        goto LEAVE;
    }

    printf("Digite o preco da compra e em seguida o de venda da %d acao:\n", count);
    scanf("%d %d", &buyingPrice, &sellingPrice);

    profit = sellingPrice - buyingPrice;

    if(profit > 1000){
        bigProfit++;
    }
    if(profit < 200){
        smallProfit++;
    }

printf("O lucro da %d acao foi de: %d\n", count, profit);
totalProfit = totalProfit + profit;
count++;
}

LEAVE:

printf("A quantidade de acoes com lucro superior a 1000 reais foi de: %d\n", bigProfit);
printf("A quantidade de acoes com lucro inferior a 200 reais foi de: %d\n", smallProfit);
printf("O lucro total da empresa foi de: %d\n", totalProfit);

return 0;
}