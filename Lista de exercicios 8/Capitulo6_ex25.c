#include <stdio.h>

int main(){
    int first[15],i,biggestNumber = 1;
    double second[15];

    for(i=0;i<15;i++){
	    printf("1 Array - Element %d:", i+1);
	    scanf("%d", &first[i]);
	}
    for(i=0;i<15;i++){
        if(first[i] > biggestNumber){
            biggestNumber = first[i];
        }
    }

    for(i=0;i<15;i++){
        second[i] = (double)first[i] / (double)biggestNumber;
    }
    for(i=0;i<15;i++){
        printf("2 Array[%d] = %.1lf\n", i, second[i]);
    }

return 0;
}
