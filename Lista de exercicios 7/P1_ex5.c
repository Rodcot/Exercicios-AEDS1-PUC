#include <stdio.h>

int sum(int n){
    int result;
    if(n == 1){
        return 1;
    }else{
        result = n + sum(n-1);
    }
    return(result);
}

int main(){
    int n;

    printf("Enter number to calcule between 1 and n:");
    scanf("%d", &n);
    
    printf("The result of the sum from 1 to %d is: %d", n, sum(n));

return 0;
}