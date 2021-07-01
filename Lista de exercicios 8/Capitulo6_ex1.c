#include <stdio.h>

int main(){
    int i,vec[6],j,evenCount=0,oddCount=0;

    printf("Enter 6 numbers for the calculations:");
    for(i=0;i<6;i++){
        scanf("%d", &vec[i]);
    }

    printf("\nThe even numbers entered are: ");
    for(j=0;j<6;j++){
        if(vec[j] % 2 == 0){
            printf("%d ", vec[j]);
            evenCount++;
        }
    }
    printf("\nThere were %d even numbers", evenCount);

    printf("\nThe odd numbers entered are: ");
    for(j=0;j<6;j++){
        if(vec[j] % 2 != 0){
            printf("%d ", vec[j]);
            oddCount++;
        }
    }
    printf("\nThere were %d odd numbers", oddCount);
    

return 0;
}