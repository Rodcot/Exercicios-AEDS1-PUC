#include <stdio.h>
int main()
{

int num, i, x, flag = 0, primeSum = 0, evenSum = 0;

for (x = 1; x < 11; x++){

    printf("Numero %d/10:\n", x);
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++){
        if (num % i == 0){
            flag = 1;
        }
    }

    if(num != 1){
        if (flag == 0){
            primeSum = primeSum + num;
        }
    }

    if(num % 2 == 0){
        evenSum = evenSum + num;
    }

}

printf("A soma dos numeros primos digitados foi de: %d\n", primeSum);
printf("A soma dos numeros pares digitados foi de: %d\n", evenSum);

return 0;
}