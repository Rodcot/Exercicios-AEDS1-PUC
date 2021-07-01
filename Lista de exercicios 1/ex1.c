#include <stdio.h> 
  
int main () {

    int a,b,c;
    printf("Digite 3 números\n");
    printf("Primeiro:\n");
    scanf("%d", &a);
    printf("Segundo:\n");
    scanf("%d", &b);
    printf("Terceiro:\n");
    scanf("%d", &c);

    int sum;
    float avg;
    sum = a + b + c;
    avg = sum / 3;
    printf("A soma dos números é: %d e a media deles é: %f\n", sum, avg);
    

    return 0;
}