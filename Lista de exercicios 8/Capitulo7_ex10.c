#include <stdio.h>

int main(){
    int i,j,first[5][5],line4=0,column2=0,diagonalMain=0,diagonalSecondary=0,totalSum=0;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Enter Array[%d][%d]:", i+1, j+1);
            scanf("%d", &first[i][j]);
        }
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(j==4){
                line4 += first[i][j];
            }
            if(i==2){
                column2 += first[i][j];
            }
            if(i==j){
                diagonalMain += first[i][j];
            }
            if(i+j == 4){
                diagonalSecondary += first[i][j];
            }
            totalSum += first[i][j];
        }
    }

    printf("The sum of the elements of:\nLine 4 = %d\nColumn 2 = %d\nMain diagonal = %d\nSecondary diagonal = %d\nAll elements of the array = %d",line4,column2,diagonalMain,diagonalSecondary,totalSum);

return 0;
}