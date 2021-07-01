#include <stdio.h> // Mesmo programa do exercicio 17 da Parte 1.

int gcd(int x,int y){
    int i,result;
    for(i = 1; i <= x && i <= x; i++){
        if(x % i == 0 && y % i == 0){
            result = i;
        }
    }
    return(result);
}

int main(){
    int a,b,result;

    printf("Enter two numbers for the Greatest Common Divisor:\n");
    scanf("%d %d", &a, &b);

    result = gcd(a,b);

    printf("The GCD of %d and %d is: %d", a, b, result);
}