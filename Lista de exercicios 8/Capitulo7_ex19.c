#include <stdio.h>

int main(){
    int i,j,first[8][6],totalSum=0,count=0;
    double avg;

    for(i=0;i<8;i++){
        for(j=1;j<7;j++){
            printf("Enter Array[%d][%d]:", i+1, j);
            scanf("%d", &first[i][j]);
        }
    }
    

    for(i=0;i<8;i++){
        for(j=1;j<7;j++){
            if(j % 2 == 0){
                totalSum += first[i][j];
                count++;
            }
        }
    }
     avg = totalSum / count;

    printf("The average from all elements in a even line inside the array was: %.1lf", avg);

return 0;
}