#include <stdio.h>
#include <string.h>
#include <stdbool.h>


bool arePermutation(char strA[],char strB[]){
    int i,j;
    char temp;
    int lA = strlen(strA);
    int lB = strlen(strB);

    if(lA != lB){
        return false;
    }

    for(i=0;i<lA-1;i++){
        for(j=i+1;j<lA;j++){
            if(strA[i]>strA[j]){
                temp = strA[i];
                strA[i] = strA[j];
                strA[j] = temp;
            }
        }
    }
    for(i=0;i<lB-1;i++){
        for(j=i+1;j<lB;j++){
            if(strB[i]>strB[j]){
                temp = strB[i];
                strB[i] = strB[j];
                strB[j] = temp;
            }
        }
    }

    for(i=0;i<lA;i++){
        if(strA[i] != strB[i]){
            return false;
        }
    }

return true;
}


int main(){
    char strA[9999],strB[9999];
    bool answer;

    printf("Write the first phrase to check permutation(up to 9998 characters):");
    fgets(strA, sizeof(strA), stdin);

    printf("Input(A): %s", strA);

    printf("Write the second phrase(up to 9998 characters):");
    fgets(strB, sizeof(strB), stdin);

    printf("Input(B): %s", strB);

    answer = arePermutation(strA,strB);

    if(answer == true){
        printf("They are permutations.");
    }else{
        printf("They are NOT permutations.");
    }

return 0;
}