#include <stdio.h>
#include <math.h>

int main(){

int exponent = 0, num1 = 15;
double calculation, power, calculationTotal = 0, division;

for(num1 = 15; num1 > 0 ; num1--){
    power = pow(2 , exponent);
    division = pow(num1, 2);
    calculation = power / division;
    calculationTotal = calculationTotal + calculation;
    exponent++;
}

printf("The result is: %0.2lf\n", calculationTotal);

return 0;
}