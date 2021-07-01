#include <stdio.h>
#include <string.h>

int main(){
    char str[9999],key[9999]; 
    int lenght,i,count=0,lenghtOfKey,j,biggestCount=0;
    

    printf("Write a string(up to 9998 characters):");
    fgets(str, sizeof(str), stdin);

    printf("Input: %s", str);
    lenght = strlen(str);

    printf("Enter the substring you want to find:");
    fgets(key, sizeof(key), stdin);
    lenghtOfKey = strlen(key);

    for(i=0;i<lenght;i++){
        if(str[i] == key[0]){
            for(j=0;j<lenghtOfKey;j++){
                if(str[i+j] == key[j]){
                    count++;
                }else{
                    count = 0;
                }
            }
        }
        if(count>biggestCount){
            biggestCount = count;
        }
    }

    if(count == 0){
        printf("Substring entered was not found in the string.");
    }else{
        printf("Substring entered was found %d time(s).", biggestCount);
    }
    
return 0;
}