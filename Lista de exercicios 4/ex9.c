#include <stdio.h>

int main(){

int num,i;

printf("Type an intenger:\n");
scanf("%d", &num);

for(i = 1; i <= num; i++){
    printf("%d\n", i);
}


return 0;
}