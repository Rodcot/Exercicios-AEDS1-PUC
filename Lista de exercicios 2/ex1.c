#include <stdio.h>

int main() {

float a,b,c,d;

printf("Digite suas 4 notas, uma apos a outra:");
scanf("%f %f %f %f", &a,&b,&c,&d);

float media = (a + b + c + d) / 4;

if (media >= 7){
    printf("Voce foi aprovado com a nota de %0.2f", media);
}
else{
    printf("Voce foi reprovado pois sua media de %0.2f e menor que 7", media);
}

return 0;
}