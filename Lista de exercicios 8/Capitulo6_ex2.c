#include <stdio.h>

int main(){
    int i,vec[7],j;

    printf("Enter 7 numbers for the calculations:");
    for(i=0;i<7;i++){
        scanf("%d", &vec[i]);
    }

    printf("\nThe multiples of 2 are: ");
    for(j=0;j<7;j++){
        if(vec[j] % 2 == 0){
            printf("%d ", vec[j]);
        }
    }

    printf("\nThe multiples of 3 are: ");
    for(j=0;j<7;j++){
        if(vec[j] % 3 == 0){
            printf("%d ", vec[j]);
        }
    }

    printf("\nThe multiples of 2 and 3 are: ");
    for(j=0;j<7;j++){
        if(vec[j] % 2 == 0 && vec[j] % 3 == 0){
            printf("%d ", vec[j]);
        }
    }
    
return 0;
}