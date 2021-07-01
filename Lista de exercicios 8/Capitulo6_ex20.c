#include <stdio.h>

int main(){
    int first[10],i;

    for(i=0;i<10;i++){
	    printf("Element %d:", i+1);
	    scanf("%d", &first[i]);
	}

    printf("Positive numbers entered:\n");
    for(i=0;i<10;i++){
        if(first[i] > 0){
            printf("%d ", first[i]);
        }
    }

return 0;
}