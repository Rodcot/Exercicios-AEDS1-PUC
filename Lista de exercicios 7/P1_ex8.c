#include <stdio.h>

int sequence(int n){
    int result;
    if(n == 1){
        result = 1;
    }else if(n == 2){
        result = 2;
    }else if(n % 2 != 0){
        result = (2*sequence(n-1)) + (3*sequence(n-2));
    }
    return result;
}

int main(){
    int n;

    printf("Enter number for the calculations:");
    scanf("%d", &n);

    printf("The result was: %d", sequence(n));

return 0;
}