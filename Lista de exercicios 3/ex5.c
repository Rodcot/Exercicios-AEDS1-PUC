#include <stdio.h>

int main(){

int main,result,i;
main = 1;

for(i = 0; i <= 10; i++){
    result = main * i;
    printf("%d x %d = %d\n", main, i, result);
    if(main < 10 && i == 10){
    i = 0;   
    main++;
    } 
}

return 0;
}