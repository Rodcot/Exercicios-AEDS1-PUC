#include <stdio.h>

int main() {

float a,b,c;

printf("Digite tres numeros, um apos o outro:");
scanf("%f %f %f", &a,&b,&c);

if(a > b && a > c) {
    printf("O maior numero digitado foi %0.1f", a);
}
else if(b > a && b > c) {
    printf("O maior numero digitado foi %0.1f", b);
}
else  {
    printf("O maior numero digitado foi %0.1f", c);
}

return 0;
}