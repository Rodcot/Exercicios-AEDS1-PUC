#include <stdio.h>
#include <string.h>

int main(){
    char str[9999]; 
    int lenght,i,tempCount = 0,j,mostOften,oftenI,tempI;

    printf("Write a string(up to 9998 characters):");
    fgets(str, sizeof(str), stdin);

    printf("Input: %s", str);
    lenght = strlen(str);

    for(i=0;i<lenght;i++){
        for(j=0;j<lenght;j++){
            if(str[i] == str[j]){
                tempCount += 1;
                tempI = i;
            }
        }
        if(i==0){
            mostOften = tempCount;
            oftenI = tempI;
        }else if(tempCount>mostOften){
            mostOften = tempCount;
            oftenI = tempI;
        }
        tempCount = 0;
    }
    
    printf("Output: biggest %c, size %d", str[oftenI], mostOften);
    
return 0;
}