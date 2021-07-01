#include<stdio.h>

int recSearch(int arr[], int l, int r, int x){
	if(r < l){
		return -1;
	}
	if(arr[l] == x){
		return l;
	}
	if(arr[r] == x){
		return r;
	}
return recSearch(arr, l+1, r-1, x);
}

int main(){
	int givenSize,i,x;

    printf("Enter size of the array:");
    scanf("%d", &givenSize);

    int arr[givenSize];

    for(i=0;i<givenSize;i++){
        printf("Enter the %d element of the array:", i+1);
        scanf("%d", &arr[i]);
    }

	int n = sizeof(arr)/sizeof(arr[0]);

    printf("Enter the element you want to search for:");
    scanf("%d", &x);
	
	int index = recSearch(arr, 0, n-1, x);

	if (index != -1){
	    printf("Element %d is present at Array[%d]", x, index);
    }else{
		printf("Element %d is not present", x);
    }

return 0;
}
