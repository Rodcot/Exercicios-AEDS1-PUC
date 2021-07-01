#include <stdio.h>

int check(int x){
    if(x > 0){
        return 1;
    }
    else if(x < 0){
        return -1;
    }
    else{
        return 0;
    }
}

int main(){
    int x,result;

    printf("Enter number to check if it is positive or negative:\n");
    scanf("%d", &x);

    result = check(x);
    printf("(1 - Positive, 0 - Zero, -1 - Negative): %d", result);

return 0;
}