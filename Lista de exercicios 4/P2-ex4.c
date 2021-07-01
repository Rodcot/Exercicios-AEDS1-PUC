#include <stdio.h>

int main (){

double i = 0,n = 100, fact = 1, calcTotal = 0, calc;

for(i = 0; i <= 20; i++){
    if(i == 0){
        fact = 1;
    }else{
        fact = fact * i;
    }
    
    calc = n / fact;
    calcTotal = calcTotal + calc;
    n = n - 1;
}

printf("The result from the calculation is: %0.2lf", calcTotal);

return 0;
}

