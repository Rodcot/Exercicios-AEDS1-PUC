#include <stdio.h>

int main(){

double num;

for(;;){
    printf("Enter a number:\n");
    scanf("%lf", &num);

    if(num <=0 ){
        goto LEAVE;
    }
    else if((int)num % 2 == 0){
        printf("Number entered is even.\n");
    }
    else{
        printf("Number entered is odd.\n");
    }
}


LEAVE:

return 0;
}