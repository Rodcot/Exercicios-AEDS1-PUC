#include <stdio.h>

int main(){
    int i,j,num[10][10],count = 0,sum = 0;
    double avg;

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("Enter Array[%d][%d]:", i+1, j+1);
            scanf("%d", &num[i][j]);
        }
    }

    printf("Then numbers in the array's diagonal are: ");
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(i == j){
                printf("%d ", num[i][j]);
                sum += num[i][j];
                count++;
            }
        }
    }

    avg = sum / count;
    printf("\nThe average of the numbers in the diagonal was: %.1lf", avg);

return 0;
}