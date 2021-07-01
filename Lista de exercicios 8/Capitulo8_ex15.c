#include <stdio.h>

int even(int array[15]){
    int count=0,i;

    for(i=0;i<15;i++){
        if(array[i] % 2 == 0){
            count++;
        }
    }
    return count;
}


int main(){
    int i,first[15];

    for(i=0;i<15;i++){
        printf("Enter Array[%d]:", i+1);
        scanf("%d", &first[i]);
    }

    printf("The total of even numbers in the array is: %d", even(first));

return 0;
}