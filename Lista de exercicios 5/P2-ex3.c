#include <stdio.h>

int function(int x, int y){
    int result;

    if(x % y == 0){
        return 0;
    }
    else{
        while (x % y != 0){
            y++;
        }
        result = y;
        return (result);
    }
}

int main(){

    int x,y,result;

    printf("Enter two numbers for the calculations:\n");
    scanf("%d %d", &x, &y);

    result = function(x,y);
    printf("The next divisor of the first number entered is: %d (if the number is zero it is a divisor)\n", result);

return 0;
}