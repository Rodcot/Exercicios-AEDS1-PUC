#include <stdio.h>

void factorial(int x){
    double factorial,originalx;
    originalx = x;
    for(factorial= 1; x > 1; x--){
        factorial = factorial * x;
    }
    printf("The factorial of %.1lf is: %.1lf\n", originalx, factorial);
}

int main(){
    int x;

    printf("Enter the number to find the factorial of:\n");
    scanf("%d", &x);

    factorial(x);

return 0;
}