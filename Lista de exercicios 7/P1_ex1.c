#include <stdio.h>
#include <math.h>

double power(double x, double y){

    if(y == 0){
        return 1;
    }else{
        return x * power(x, y - 1);
    }
}



int main(){
    double x,y,result;

    printf("Enter the base and power for the power function, respectively:");
    scanf("%lf %lf", &x, &y);

    result = power(x,y);

    printf("The result was: %.2lf", result);


return 0;
}