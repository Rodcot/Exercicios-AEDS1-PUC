#include <stdio.h>

int sum(int n){
    int result;
    for(result = 0; n > 0; n--){
        result = result + n;
    }
    return(result);
}


int main(){
    int x, result;

    printf("Enter number for the calculation:\n");
    scanf("%d", &x);
    
    result = sum(x);
    printf("The result was: %d", result);

return 0;
}