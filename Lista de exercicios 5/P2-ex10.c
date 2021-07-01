#include <stdio.h>

double function(int x){
    double result,i,n=2;;

    for(i = 0; i < x; i++){
        result  =  result + 1/n;
        n++;
    }
    result += 1;
    return(result);
}

int main(){
    int x;
    double result;

    printf("Enter number for how many times to do the calculation:\n");
    scanf("%d", &x);

    result = function(x);

    printf("The total is: %.3lf\n", result);

return 0;
}