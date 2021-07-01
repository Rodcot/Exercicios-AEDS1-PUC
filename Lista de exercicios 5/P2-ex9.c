#include <stdio.h>

int function(int x){
    int result = 0,n;

    for(n = 1; n <= x; n++){
        if(x % n == 0){
            result = result + n;
        }
    }
    return(result);
}

int main(){

    int x,result;

    printf("Enter number for sum of it's divisors:\n");
    scanf("%d", &x);

    result = function(x);
    printf("Sum of the divisors is: %d\n", result);

return 0;
}