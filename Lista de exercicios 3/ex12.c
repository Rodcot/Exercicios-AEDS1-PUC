#include <stdio.h>
int main()
{

int num, i, x, flag = 0, primeCount = 0;

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
            primeCount++;
        }
    }
}

printf("A quantidade de numeros primos digitados foi de: %d\n", primeCount);

return 0;
}