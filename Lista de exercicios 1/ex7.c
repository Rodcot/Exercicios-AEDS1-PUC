#include <stdio.h>
int main () {
    
    int deposit;
    float interest_rate;
    printf("Digite o valor do seu deposito e da taxa de juros:\n");
    scanf("%d %f", &deposit, &interest_rate);

    float total, revenue;
    total = deposit * interest_rate;
    revenue = total - deposit;
    
    printf("O seu rendimente tem o valor de:%0.2f , e o valor total agora é de: %0.2f", revenue, total);

return 0;
}