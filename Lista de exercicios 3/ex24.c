#include <stdio.h>

int main(){

int value,highest = 0,lowest = 0;

for(;;){
    LOOP:
    printf("Digite um valor inteiro e positivo, ou o valor 0 para sair do programa:\n");
    scanf("%d", &value);

    if(value < 0){
        printf("ERROR - Valor invalido.\n");
        goto LOOP;
    }
    if(value == 0){
        printf("0 Digitado - Saindo do programa.\n");
        goto LEAVE;
    }
    if(value > highest){
        highest = value;
    }   
    else if(value < lowest){
        lowest = value;
    }
    else if(lowest == 0) {
        lowest = value;
    }
}

LEAVE:

printf("Esse foi o maior valor digitado: %d\n", highest);
printf("Esse foi o menor valor digitado: %d\n", lowest);

return 0;
}