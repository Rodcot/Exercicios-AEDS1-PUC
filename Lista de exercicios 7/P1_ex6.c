#include <stdio.h>

int GCD(int x, int y){
    if(x>y){
        GCD(x-y, y);
    }else if(y>x){
        GCD(x, y-x);
    }else{
        return x;
    }
}

int main(){
    int x,y;

    printf("Enter two numbers to find their Greatest Common Divisor:");
    scanf("%d %d", &x, &y);

    printf("The GCD of %d and %d is: %d", x, y, GCD(x,y));

return 0;
}