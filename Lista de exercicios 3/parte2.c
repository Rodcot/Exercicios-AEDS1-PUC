#include <stdio.h>

int main(){

int num, fibVarNew = 0, fibVarOld = 1;

printf("Digite um numero para a sequencia de Fibonacci:\n");
scanf("%d", &num);


if(num == 0){
    fibVarNew = 1;
}

for(num > 0; num--;){
    if(fibVarNew == 0){
        fibVarNew = 1;
    }
    else{
        fibVarNew = fibVarNew + fibVarOld;
        fibVarOld = fibVarNew - fibVarOld;
    }
}

printf("O numero digitado na sequencia de Fibonacci e: %d", fibVarNew);

return 0;
}