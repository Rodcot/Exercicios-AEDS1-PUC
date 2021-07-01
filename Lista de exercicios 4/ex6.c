#include <stdio.h>

int main(){

int num,i;

printf("Type an intenger for the loop:\n");
scanf("%d", &num);

for(i = 1; i < 10; i++){
    printf("%d\n", num);
}

return 0; 
}