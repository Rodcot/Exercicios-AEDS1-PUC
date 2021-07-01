#include <stdio.h>

int main(){
    int i,j,num[5][5],count = 0,sum = 0;
    double avg;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Enter Array[%d][%d]:", i+1, j+1);
            scanf("%d", &num[i][j]);
        }
    }

    printf("Then numbers in the array's secondary diagonal are: ");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i+j == 4){
                printf("%d ", num[i][j]);
                sum += num[i][j];
                count++;
            }
        }
    }

    avg = sum / count;
    printf("\nThe average of the numbers in the secondary diagonal was: %.1lf", avg);

return 0;
}