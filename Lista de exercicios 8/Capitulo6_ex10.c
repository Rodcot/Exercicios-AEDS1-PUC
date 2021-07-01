#include <stdio.h>

int main(){
    int i,j=0,k,first[10], second[5], evenSum[10], evenCount = 0, totalSum = 0, oddDivisors[10], oddCount = 0, totalDivisors = 0;

    for(i=0;i<10;i++){
        printf("Enter the %d for the first array:", i+1);
        scanf("%d", &first[i]);
    }
    for(i=0;i<5;i++){
        printf("Enter the %d for the second array:", i+1);
        scanf("%d", &second[i]);
    }

    for(i=0;i<10;i++){
        if(first[i] % 2 == 0){
            totalSum = first[i];
            for(j=0;j<5;j++){
                totalSum += second[j];
            }
            evenSum[evenCount] = totalSum;
            totalSum = 0;
            evenCount++;
        }
        if(first[i] % 2 != 0){
            for(j=0;j<5;j++){
                if(first[i] % second[j] == 0){
                    totalDivisors++;
                }
            }
            oddDivisors[oddCount] = totalDivisors;
            oddCount++;
            totalDivisors = 0;
        }
    }

    for(k=0;evenCount>0;evenCount--){
        printf("%d number from First Resulting Array: %d\n", k+1, evenSum[k]);
        k++;
    }
    for(k=0;oddCount>0;oddCount--){
        printf("%d number from Second Resulting Array: %d\n", k+1, oddDivisors[k]);
        k++;
    }


return 0;
}