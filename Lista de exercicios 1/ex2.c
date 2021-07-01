#include <stdio.h>
int main () {
    int wage;
    printf("Digite o seu salário:\n");
    scanf("%d", &wage);

    float adjustment; 
    adjustment = wage * 1.1;
    printf("Seu salário após o ajuste de 10 porcento é de: %0.2f", adjustment);

return 0;

}