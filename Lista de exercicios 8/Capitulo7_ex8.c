#include <stdio.h>

int main(){
    int i,j,first[3][8],second[3][8],sum[3][8],difference[3][8];

    for(i=0;i<3;i++){
        for(j=0;j<8;j++){
            printf("Enter 1 Array[%d][%d]:", i+1, j+1);
            scanf("%d", &first[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<8;j++){
            printf("Enter 2 Array[%d][%d]:", i+1, j+1);
            scanf("%d", &second[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<8;j++){
            sum[i][j] = first[i][j] + second[i][j];
            if(first[i][j]>second[i][j]){
                difference[i][j] = first[i][j] - second[i][j];
            }else{
                difference[i][j] = second[i][j] - first[i][j];
            }
        }
    }

    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<8;j++){
            printf("Array resulting of the sum the two[%d][%d]: %d\n", i+1, j+1, sum[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<8;j++){
            printf("Array of the difference of the two[%d][%d]: %d\n", i+1, j+1, difference[i][j]);
        }
    }

return 0;
}