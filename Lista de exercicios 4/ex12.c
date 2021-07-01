#include <stdio.h>

int main(){

int i,num,counter = 0;

for(i = 0; i <= 10; i++){
    printf("Enter the %d number:",i);
    scanf("%d", &num);

    if(num < 0){
        counter++;
    }
}

printf("%d numbers from the ones entered were negative.", counter);

return 0;
}