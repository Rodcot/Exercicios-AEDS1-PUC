#include <stdio.h>
int main () {
    int wage;
    printf("Digite o seu salário:\n");
    scanf("%d", &wage);

    float adjustment, taxes; 
    taxes =  wage * 0.07;
    adjustment = (wage * 1.05) - taxes;
    printf("Seu salário após o ajuste e o pagamento de impostos é de: %0.2f", adjustment);

return 0;
}