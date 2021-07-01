#include <stdio.h>

int main (){

int codigo,quantia,total,unidade;
double desconto;
printf("Digite o codigo do produto e em seguida a quantia comprada:\n");
scanf("%d %d", &codigo, &quantia);

if(codigo <= 10){
    unidade = 10;
}
else if(codigo >=11 && codigo <=20){
    unidade = 15;
}
else if(codigo >=21 && codigo <=30){
    unidade = 20;
}
else if(codigo >=31 && codigo <=40){
    unidade = 30;
}
else{
    goto error;
}

total = quantia * unidade;

if(total <= 250){
    desconto = total * 0.95;
    printf("O codigo do produto e: %d, o seu valor unitario e: %d, o valor total antes do desconto e de: %d, e apos o desconto de 5 porcento e de: %0.2lf", codigo, unidade, total, desconto);
}
else if (total > 250 && total <= 500){
    desconto = total * 0.9;
    printf("O codigo do produto e: %d, o seu valor unitario e: %d, o valor total antes do desconto e de: %d, e apos o desconto de 20 porcento e de: %0.2lf", codigo, unidade, total, desconto);
}
else if(total > 500){
    desconto = total * 0.85; 
    printf("O codigo do produto e: %d, o seu valor unitario e: %d, o valor total antes do desconto e de: %d, e apos o desconto de 10 porcento e de: %0.2lf", codigo, unidade, total, desconto);
}

error:
    printf("ERRO - codigo do produto inexistente");

return 0;
}