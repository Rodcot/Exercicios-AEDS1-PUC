#include <stdio.h>
#include <math.h>

int main (){

int i,num;
double power, powerTotal = 0, calc;

printf("Enter an intenger number:\n");
scanf("%d", &num);

for(i = 1; i <= num; i++){
    power = pow(i, 2);
    powerTotal = powerTotal + power;
}

calc = num*(num + 1) * (2 * num + 1) / 6;

printf("Proof that %0.2lf is equal to %0.2lf\n", powerTotal, calc);

return 0;
}