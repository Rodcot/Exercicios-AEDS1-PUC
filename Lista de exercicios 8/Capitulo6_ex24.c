#include <stdio.h>

int main(){
    int first[15],i,second[15],j,flag=0,k=0,primeCount=0;

    for(i=0;i<15;i++){
	    printf("1 Array - Element %d:", i+1);
	    scanf("%d", &first[i]);
	}
    for(i=0;i<15;i++){
	    for (j = 2; j <= first[i] / 2;j++) {
            if (first[i] % j == 0){
                flag = 1;
                break;
            }
        }

        if(flag == 1){
            break;
        }else if(flag == 0){
            second[k] = first[i];
            k++;
            primeCount++;
        }else{
            break;
        }
	}

    for(i=0;primeCount>0;primeCount--){
        printf("Prime Array[%d] = %d\n", i, second[i]);
        i++;
    }

return 0;
}
