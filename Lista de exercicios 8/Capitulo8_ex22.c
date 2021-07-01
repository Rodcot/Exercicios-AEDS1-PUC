#include <stdio.h>

int big(int first[10][5]){
    int i,j,totalSum=0;
    for(i=0;i<10;i++){
        for(j=0;j<5;j++){
           if(i>5){
               totalSum += first[i][j];
           }
        }
    }
    return totalSum;
}

int main(){
    int i,j,first[10][5];

    for(i=0;i<10;i++){
        for(j=0;j<5;j++){
            printf("Enter Array[%d][%d]:", i+1, j+1);
            scanf("%d", &first[i][j]);
        }
    }

    printf("The total sum of the elements below the 6th line of the 2d array was: %d", big(first));

return 0;
}