#include <stdio.h>
#include <math.h>

int main(){

    float n;
    printf("Digite um número:\n");
    scanf("%f", &n);

    float root;
    root = sqrt(n);
    printf("A raíz de seu número é: %0.2f", root);

return 0;
}