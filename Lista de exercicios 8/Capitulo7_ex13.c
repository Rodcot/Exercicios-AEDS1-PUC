#include <stdio.h>

int main(){
    int i,j,first[6][4],iBig0=-9999,iBig1=-9999,iBig2=-9999,iBig3=-9999,iBig4=-9999,iBig5=-9999,second[6][4];

    for(i=0;i<6;i++){
        for(j=0;j<4;j++){
            printf("Enter Array[%d][%d]:", i+1, j+1);
            scanf("%d", &first[i][j]);
        }
    }

    for(i=0;i<6;i++){
        for(j=0;j<4;j++){
            if(i==0){
                if(first[i][j]>iBig0){
                    iBig0 = first[i][j];
                }
            }else if(i==1){
                if(first[i][j]>iBig1){
                    iBig1 = first[i][j];
                }
            }else if(i==2){
                if(first[i][j]>iBig2){
                    iBig2 = first[i][j];
                }
            }else if(i==3){
                if(first[i][j]>iBig3){
                    iBig3 = first[i][j];
                }
            }else if(i==4){
                if(first[i][j]>iBig4){
                    iBig4 = first[i][j];
                }
            }else if(i==5){
                if(first[i][j]>iBig5){
                    iBig5 = first[i][j];
                }
            }
        }
    }

    for(i=0;i<6;i++){
        for(j=0;j<4;j++){
            if(i==0){
                second[i][j] = first[i][j] * iBig0;
            }else if(i==1){
                second[i][j] = first[i][j] * iBig1;
            }else if(i==2){
                second[i][j] = first[i][j] * iBig2;
            }else if(i==3){
                second[i][j] = first[i][j] * iBig3;
            }else if(i==4){
                second[i][j] = first[i][j] * iBig4;
            }else if(i==5){
                second[i][j] = first[i][j] * iBig5;
            }
        }
    }
    
    printf("First array * Biggest number in array line = Second array\n");
    for(i=0;i<6;i++){
        for(j=0;j<4;j++){
            if(i==0){
                printf("%d  * %d = %d\n",first[i][j],iBig0,second[i][j]);
            }else if(i==1){
                printf("%d  * %d = %d\n",first[i][j],iBig1,second[i][j]);
            }else if(i==2){
                printf("%d  * %d = %d\n",first[i][j],iBig2,second[i][j]);
            }else if(i==3){
                printf("%d  * %d = %d\n",first[i][j],iBig3,second[i][j]);
            }else if(i==4){
                printf("%d  * %d = %d\n",first[i][j],iBig4,second[i][j]);
            }else if(i==5){
                printf("%d  * %d = %d\n",first[i][j],iBig5,second[i][j]);
            }
        }
    }
    
return 0;
}