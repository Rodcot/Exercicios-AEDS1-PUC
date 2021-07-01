#include <stdio.h>

int main(){
    int i,j,first[5][5],bignumber=-99999,second[5][5];

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Enter Array[%d][%d]:", i+1, j+1);
            scanf("%d", &first[i][j]);
        }
    }
    

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(first[i][j]>bignumber){
                bignumber = first[i][j];
            }
        }
    }
    printf("Highest number inside array: %d\n",bignumber);
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==j){
                second[i][j] = first[i][j] * bignumber;
            }else{
                second[i][j] = first[i][j];
            }
        }
    }
    
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("New array[%d][%d] = %d\n",i+1,j+1,second[i][j]);
        }
    }

return 0;
}