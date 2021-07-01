#include <stdio.h>

int main(){

int main,result,i;
printf("Digite um numero para a tabuada:\n");
scanf("%d", &main);

for(i = 0; i <= 10; i++){
    result = main * i;
    printf("%d x %d = %d\n", main, i, result);
}

return 0;
}