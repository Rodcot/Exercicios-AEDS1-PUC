#include <stdio.h>

int main (){

int preco,categoria,classificacao;
char refrigeracao;
double aumento,imposto,novopreco;

printf("Digite o preco do seu produto e em seguida sua categoria(1 - limpeza; 2 - alimentacao; ou 3 - vestuario):\n");
scanf("%d %d", &preco, &categoria);
printf("Digite  R (produtos que necessitam de refrigeracao) ou N (produtos que não necessitam de re-frigeracao):\n");
scanf(" %c", &refrigeracao);

if(preco <= 25){
    if(categoria == 1){
        aumento = (preco * 1.05) - preco;
        }
    else if(categoria == 2){
        aumento = (preco * 1.08) - preco;
        }
    else{
        aumento = (preco * 1.1) - preco;
        }
}
else{
    if(categoria == 1){
        aumento = (preco * 1.12) - preco;
    }
    else if(categoria == 2){
        aumento = (preco * 1.15) - preco;
    }
    else{
        aumento = (preco * 1.18) - preco;
    }
}


if(refrigeracao == 'R' || categoria == 2){
    imposto = preco - (preco * 0.95);
}
else {
    imposto = preco - (preco * 0.92);
}

novopreco = preco + aumento + imposto;

if(novopreco <= 50){
    printf("o valor do aumento do preco e de: %0.2lf, o valor do imposto e de: %0.2lf, o novo preco e de: %0.2lf classificado como um preco Barato", aumento, imposto, novopreco);
}
else if(novopreco > 50 && novopreco < 120){
    printf("o valor do aumento do preco e de: %0.2lf, o valor do imposto e de: %0.2lf, o novo preco e de: %0.2lf classificado como um preco Normal", aumento, imposto, novopreco);
}
else{
    printf("o valor do aumento do preco e de: %0.2lf, o valor do imposto e de: %0.2lf, o novo preco e de: %0.2lf classificado como um preco Caro", aumento, imposto, novopreco);
}

return 0;
}