#include <stdio.h>

int main(){

int senha,tentativa;
senha = 4531;
printf("Digite o numero da senha:\n");
scanf("%d", &tentativa);

if(tentativa == senha){
    printf("Acesso permitido");
}
else{
    printf("Acesso negado");
}

}