#include <stdio.h>

int main(){

int sequence, small = 0, large = 0, num, i;

printf("Enter the amount of numbers in the sequence:\n");
scanf("%d", &sequence);

for(i = 1; i <= sequence; i++){
    printf("Enter the %d number\n", i);
    scanf("%d", &num);

    if(small == 0){
        small = num;
    }
    else if(large == 0){
        large = num;
    }
    else if(num <= small){
        small = num;
    }
    else if(num >= large){
        large = num;
    }
}

printf("The largest number entered was: %d\nThe smallest number entered was: %d.\n", large, small);

return 0;
}