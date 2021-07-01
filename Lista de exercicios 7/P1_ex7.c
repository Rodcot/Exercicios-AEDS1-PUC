#include <stdio.h>

double sequence(double n){
    double result;
    if(n == 1){
        result = 1;
    }else{
        result = 1/n+sequence(n-1);
    }
    return(result);
}

int main(){
    double n;

    printf("Enter n for the sequence: 1 + 1/2 + 1/3 + 1/n... :");
    scanf("%lf", &n);

    printf("The total of %.lf elements of the sequence is: %lf", n, sequence(n));

return 0;
}