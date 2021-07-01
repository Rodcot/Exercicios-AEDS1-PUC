#include <stdio.h>

int main(){
    int i,j,num[2][4],evenSum = 0,evenCount = 0;
    double evenAvg;

    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            printf("Enter Array[%d][%d]:", i+1, j+1);
            scanf("%d", &num[i][j]);
        }
    }

    printf("The numbers between 15 and 20 were: ");
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            if(num[i][j] >= 12 && num[i][j] <= 20){
                printf("%d ", num[i][j]);
            }
            if(num[i][j] % 2 == 0){
                evenSum += num[i][j];
                evenCount++;
            }
        }
    }

    evenAvg = evenSum / evenCount;
    printf("\nThe average of the even numbers entered was: %.1lf", evenAvg);

return 0;
}