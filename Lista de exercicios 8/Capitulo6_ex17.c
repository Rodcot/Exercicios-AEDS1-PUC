#include <stdio.h>

int main(){
    int first[10], second[10],i,third[20],j,k;

    for(i=0;i<10;i++){
	    printf("1 Array - element %d:", i+1);
	    scanf("%d",&first[i]);
	}
    for(i=0;i<10;i++){
	    printf("2 Array - element %d:", i+1);
	    scanf("%d",&second[i]);
	}

    for(j=0;j<10;j++){
        third[j] = first[j];
    }
    for(k=0;k<10;k++){
        third[j] = second[k];
        j++;
    }

    j=0;
    for(i=0;i<20;i++){
        
        for(k=0;k<19;k++){
            if(third[k]<=third[k+1]){
                j=third[k+1];
                third[k+1] = third[k];
                third[k]=j;
            }
        }
    }

    printf("The numbers entered in descending order are:\n");
    for(i=0;i<20;i++){
        printf("%d  ",third[i]);
    }

return 0;
}