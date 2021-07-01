#include <stdio.h>

int main(){

int i,num,counter1 = 0,counter2 = 0;

for(i = 0; i <= 10; i++){
    printf("Enter the %d number:",i);
    scanf("%d", &num);

    if(num >= 10 && num <= 20){
        counter1++;
    }
    else{
        counter2++;
    }
}

printf("%d numbers from the ones entered were between 10 and 20.\n", counter1);
printf("%d numbers from the ones entered were not.\n", counter2);


return 0;
}