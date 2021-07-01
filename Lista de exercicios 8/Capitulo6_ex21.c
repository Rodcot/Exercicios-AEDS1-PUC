#include <stdio.h>

int main(){
    int first[10],i,second[10];

    for(i=0;i<10;i++){
	    printf("Element %d:", i+1);
	    scanf("%d", &first[i]);
	}

    for(i=0;i<10;i++){
	    if(first[i] == 0){
            second[i] = 1;
        }else{
            second[i] = first[i];
        }
	}

    for(i=0;i<10;i++){
	    printf("First Array[%d] = %d\n", i, first[i]);
	}
    for(i=0;i<10;i++){
	    printf("Second Array[%d] = %d\n", i, second[i]);
	}

return 0;
}