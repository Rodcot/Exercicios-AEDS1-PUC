#include <stdio.h>

int main() {

float a,b;

printf("Digite suas 2 notas, uma apos a outra:");
scanf("%f %f", &a,&b);

float media = (a + b) / 2;

if (media < 3){
    printf("Reprovado");
}
else if(media < 7) {
    printf("Exame");
}
else{
    printf("Aprovado");
}


return 0;
}