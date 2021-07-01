#include <stdio.h>

double average(int total, int i){
    double average;
    average = (double)total / (double)i;
    
    return(average);
}


int main(){

    int num,total=0,i=0;
    double result;

    LOOP:
    printf("Enter numbers for average (or 0 to end):\n");
    scanf("%d", &num);

    if(num == 0){
        printf("Finalizing program.\n");
        goto END;
    }else{
        total = total + num;
        i++;
        goto LOOP;
    }

END:

result = average(total, i);

printf("The average is: %.1lf\n", result);

return 0;
}