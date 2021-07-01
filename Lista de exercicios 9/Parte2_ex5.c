#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int size1,size2,i,j;
    char temp;

    printf("Enter size of the first string:");
    scanf("%d", &size1);
    size1++;
    char strA[size1];

    printf("Write the first string(up to %d characters):",size1-1);
    scanf("%s", strA);

    printf("Input(A): %s \n", strA);

    printf("Enter size of the second string:");
    scanf("%d", &size2);
    size2++;
    char strB[size2];

    printf("Write the second string(up to %d characters):",size2-1);
    scanf("%s",strB);

    printf("Input(B): %s \n", strB);


    for(i=0;i<size1-1;i++){
	    for(j=i+1;j<size1;j++){
		    if(strA[i]>strA[j]){
				temp = strA[i];
				strA[i] = strA[j];
				strA[j] = temp;
			}
		}
	}
    for(i=0;i<size2-1;i++){
	    for(j=i+1;j<size2;j++){
		    if(strB[i]>strB[j]){
				temp = strB[i];
				strB[i] = strB[j];
				strB[j] = temp;
			}
		}
	}

    printf("%s \n",strA);
    printf("%s \n",strB);

    char *strC = malloc(strlen(strA) + strlen(strB) + 1);
    strcpy(strC, strA);
    strcat(strC, strB);

    int size3 = size1+size2;

    for(i=0;i<size3-1;i++){
	    for(j=i+1;j<size3;j++){
		    if(strC[i]>strC[j]){
				temp = strC[i];
				strC[i] = strC[j];
				strC[j] = temp;
			}
		}
	}

    printf("%s \n",strC);

return 0;
}