#include <stdio.h>

int main(){
    int first[10], second[10],i,third[10],j,k;

    for(i=0;i<10;i++){
	    printf("1 Array - element %d:", i+1);
	    scanf("%d",&first[i]);
	}
    for(i=0;i<10;i++){
	    printf("2 Array - element %d:", i+1);
	    scanf("%d",&second[i]);
	}

    for(j=0;j<10;j++){
        third[j] = first[j] * second[j];
    }
    for(k=0;k<10;k++){
        printf("%d * %d = %d\n", first[k], second[k], third[k]);
    }

return 0;
}