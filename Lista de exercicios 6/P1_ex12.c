#include <stdio.h>

double function(double x, double z){
    double power = x;
    for(; z > 1 ; z--){
        power = power * x;
    }
    return(power);
}



int main(){
    double a,b,result;

    printf("Enter the base and its exponent, respectively for the exponentiation:\n");
    scanf("%lf %lf", &a, &b);

    result = function(a,b);
    printf("The result of %.lf^%.lf was: %.2lf", a, b, result);

return 0;
}