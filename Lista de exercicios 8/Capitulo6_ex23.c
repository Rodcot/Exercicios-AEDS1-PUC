#include <stdio.h> 

int main(){
    int first[5],i,second[5],j=4,totalSum = 0;

    for(i=0;i<5;i++){
	    printf("1 Array - Element %d:", i+1);
	    scanf("%d", &first[i]);
	}
    for(i=0;i<5;i++){
	    printf("2 Array - Element %d:", i+1);
	    scanf("%d", &second[i]);
	}

    for(i=0;i<5;i++){
        totalSum += first[i] - second[j];
        j--;
    }

    printf("The total result of the subtractions was: %d", totalSum);

return 0;
}