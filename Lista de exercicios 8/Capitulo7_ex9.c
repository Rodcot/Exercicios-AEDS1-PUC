#include <stdio.h>

int main(){
    int i,j,first[3][3],num;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter Array[%d][%d]:", i+1, j+1);
            scanf("%d", &first[i][j]);
        }
    }
    printf("Enter number to multiply all values entered by:");
    scanf("%d", &num);

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("[%d][%d]:%d * %d = %d\n", i+1, j+1, first[i][j], num, first[i][j]*num);
        }
    }

return 0;
}