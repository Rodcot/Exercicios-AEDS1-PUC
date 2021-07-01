#include <stdio.h>

int main(){
    int i,j,num[2][3];

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Enter Array[%d][%d]:", i+1, j+1);
            scanf("%d", &num[i][j]);
        }
    }

    printf("The numbers NOT between 5 and 15 were: ");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            if(num[i][j] < 5 || num[i][j] > 15){
                printf("%d ", num[i][j]);
            }
        }
    }

return 0;
}