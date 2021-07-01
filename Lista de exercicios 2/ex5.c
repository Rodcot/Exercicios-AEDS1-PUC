#include <stdio.h>

int main() {

float a,b,escolha;

printf("Digite 2 numeros, um apos a outro:");
scanf("%f %f", &a,&b);

printf("Escolha uma opcao de 1 a 4:");
scanf("%f", &escolha);

if (escolha == 1){
    float media = (a + b) / 2;
    printf("A media dos numeros digitados e de: %0.1f", media);
}
else if (escolha == 2){
    if(a > b){
        float diff = a - b;
        printf("A diferenca dos numeros digitados e de: %0.2f", diff);
    }
    else{
        float diff = b - a;
        printf("A diferenca dos numeros digitados e de: %0.2f", diff);
    }
}
else if(escolha == 3){
    float produto = a*b;
    printf("O produto dos numeros digitados e de: %0.2f", produto);
}
else if(escolha == 4){
    float div = a / b;
    printf("A divisao do primeiro numero pelo segundo resulta em: %0.2f", div);
}
else{
    printf("ERRO - numero digitado nao e uma opcao valida");
}

return 0;
}