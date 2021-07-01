#include <stdio.h>
#include <math.h>

int main() {

char c;
double a,b;

printf("Digite seus 2 numeros, um apos a outro:\n");
scanf("%lf %lf", &a,&b);

printf("Escolha entre as opcoes (a) O primeiro numero elevado ao segundo numero. (b) Raiz quadrada de cada um dos numeros. (c) Raiz cubica de cada um dos numeros:\n");
scanf(" %c", &c);

if (c == 'a' || c == 'A'){
    double power = pow(a,b);
    printf("O primeiro numero elevado ao segundo e: %0.1lf", power);
}
else if (c == 'b' || c == 'B'){
    double sqrA = sqrt(a);
    double sqrB = sqrt(b);
    printf("A raiz quadrada do primeiro numero e de: %0.2lf e o do segundo numero e de: %0.2lf", sqrA, sqrB);
}
else if(c == 'c' || c == 'C'){
    double cbrA = cbrt(a);
    double cbrB = cbrt(b);
    printf("A raiz cubica do primeiro numero e de: %0.2lf e o do segundo numero e de: %0.2lf", cbrA, cbrB);
}
else{
    printf("ERRO - caracter digitado nao e uma opcao valida");
}

return 0;
}