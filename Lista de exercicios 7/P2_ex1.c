#include <stdio.h>

int function(int str[], int size){
    int i,j;

    for(i = 0;i < size; i++){
        printf("%d ", str[i]);
    }
    printf("\n");
    for(j = size; j > 0; j--){
        printf("%d ", str[j]);
    }

}

int main(){
    int n,i =  0;

    printf("Enter the size of the array:");
    scanf("%d", &n);

    int str[n];

    while (i < n){
        printf("Enter %d number:", i+1);
        scanf("%s", &str[i]);
        i++;
    }

    function(str, n);
}