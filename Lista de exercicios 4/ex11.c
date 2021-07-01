#include <stdio.h>

int main(){

int num,i;

printf("Type a value between 1 and 10:\n");
scanf("%d", &num);

if(num >= 1 && num <= 10){
    for(i = 0; i <= 10; i++){
    printf("%d x %d = %d\n",num, i, num*i);
 }
}
else{
    printf("ERROR - invalid value.");
}


return 0;
}