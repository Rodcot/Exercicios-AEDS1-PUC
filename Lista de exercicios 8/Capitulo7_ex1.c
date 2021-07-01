#include <stdio.h>

int main(){
    int i,j,num[3][5];

    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("Enter Array[%d][%d]:", i+1, j+1);
            scanf("%d", &num[i][j]);
        }
    }

    printf("The numbers between 15 and 20 were: ");
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            if(num[i][j] >= 15 && num[i][j] <= 20){
                printf("%d ", num[i][j]);
            }
        }
    }

return 0;
}