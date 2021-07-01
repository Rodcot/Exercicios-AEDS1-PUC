#include <stdio.h>

const int ten=10;

int big(int first[ten][ten]){
    int i,j,biggestNumber=-99999;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(j>i){
                if(first[i][j]>biggestNumber){
                    biggestNumber = first[i][j];
                }
            }
        }
    }
    return biggestNumber;
}


int main(){
    int i,j,first[ten][ten];

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("Enter Array[%d][%d]:", i+1, j+1);
            scanf("%d", &first[i][j]);
        }
    }

    printf("The highest number above the main diagonal on the 2d array is: %d", big(first));

return 0;
}