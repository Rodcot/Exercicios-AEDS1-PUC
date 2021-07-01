#include <stdio.h>

int main(){

double num;

do{
    printf("Enter a number:\n");
    scanf("%lf", &num);
    
    if(num > 0){
        printf("The number entered is positive.\n");
    }
    else if(num < 0){
        printf("The number entered is negative.\n");
    }
} while (num != 0);

return 0;
}