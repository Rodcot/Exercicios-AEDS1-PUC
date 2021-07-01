#include <stdio.h>
int main () {

    int a,b,c,d;
    printf("Digite 4 números:\n");
    printf("Primeiro:\n");
    scanf("%d", &a);
    printf("Segundo:\n");
    scanf("%d", &b);
    printf("Terceiro:\n");
    scanf("%d", &c);
    printf("Quarto:\n");
    scanf("%d", &d);

    int sum;
    sum = a+b+c+d;
    printf("A soma dos quatro números é: %d", sum);


return 0;
}