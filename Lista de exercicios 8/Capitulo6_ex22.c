#include <stdio.h> 

int main(){
    int first[10],i,second[10],j=0;

    for(i=0;i<10;i++){
	    printf("Element %d:", i+1);
	    scanf("%d", &first[i]);
	}

    for(i=0;i<10;i++){
        if(first[i] > 0){
            second[j] = first[i];
            j++;
        }
    }

    for(i=0;j>0;j--){
        printf("Array B[%d] = %d\n", i, second[i]);
        i++;
    }

return 0;
}