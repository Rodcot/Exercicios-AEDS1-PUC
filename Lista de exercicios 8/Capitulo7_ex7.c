#include <stdio.h>

int main(){
    int i,j,m[4][6],n[6][4],sum10=0,sum11=0,sum12=0,sum13=0,sum14=0,sum15=0,sum20=0,sum21=0,sum22=0,sum23=0,sum24=0,sum25=0,total0,total1,total2,total3,total4,total5;

    for(i=0;i<4;i++){
        for(j=0;j<6;j++){
            printf("Enter 1 Array[%d][%d]:", i+1, j+1);
            scanf("%d", &m[i][j]);
        }
    }
    for(i=0;i<6;i++){
        for(j=0;j<4;j++){
            printf("Enter 2 Array[%d][%d]:", i+1, j+1);
            scanf("%d", &n[i][j]);
        }
    }

    printf("The sum of the 1 Array rows are: ");
    for(i=0;i<4;i++){
        for(j=0;j<6;j++){
            if(j == 0){
                sum10 += m[i][j];
            }else if(j == 1){
                sum11 += m[i][j];
            }else if(j == 2){
                sum12 += m[i][j];
            }else if(j == 3){
                sum13 += m[i][j];
            }else if(j == 4){
                sum14 += m[i][j];
            }else if(j == 5){
                sum15 += m[i][j];
            }
        }
    }
    printf("%d ", sum10);
    printf("%d ", sum11);
    printf("%d ", sum12);
    printf("%d ", sum13);
    printf("%d ", sum14);
    printf("%d \n", sum15);

    printf("The sum of the 2 Array columns are: ");
    for(i=0;i<6;i++){
        for(j=0;j<4;j++){
            if(i == 0){
                sum20 += n[i][j];
            }else if(i == 1){
                sum21 += n[i][j];
            }else if(i == 2){
                sum22 += n[i][j];
            }else if(i == 3){
                sum23 += n[i][j];
            }else if(i == 4){
                sum24 += n[i][j];
            }else if(i == 5){
                sum25 += n[i][j];
            }
        }
    }
    printf("%d ", sum20);
    printf("%d ", sum21);
    printf("%d ", sum22);
    printf("%d ", sum23);
    printf("%d ", sum24);
    printf("%d \n", sum25);

    total0 = sum10 + sum20;
    total1 = sum11 + sum21;
    total2 = sum12 + sum22;
    total3 = sum13 + sum23;
    total4 = sum14 + sum24;
    total5 = sum15 + sum25;

    printf("The sum of the 1 Array rows and the 2 Array columns are:\n %d / %d / %d / %d / %d / %d", total0, total1, total2, total3, total4, total5);

return 0;
}