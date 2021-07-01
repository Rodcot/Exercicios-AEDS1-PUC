#include <stdio.h> 

int main(){
    int i,array[15],biggestNumber = -999999,iBig,smallestNumber = 999999,iSmall;

    for(i=0;i<15;i++){
	    printf("Element %d:", i+1);
	    scanf("%d",&array[i]);
	}

    for(i=0;i<15;i++){
        if(array[i] > biggestNumber){
            biggestNumber = array[i];
            iBig = i;
        }
        if(array[i] < smallestNumber){
            smallestNumber = array[i];
            iSmall = i;
        }
    }

    printf("The biggest number entered was: %d and its position was: %d\n", biggestNumber, iBig+1);
    printf("The smallest number entered was: %d and its position was: %d\n", smallestNumber, iSmall+1);


return 0;
}