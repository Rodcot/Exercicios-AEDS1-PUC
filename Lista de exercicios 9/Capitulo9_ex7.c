#include <stdio.h>
#include <string.h>

int main(){
    char str[9999];
    int lenght,i,unique = 0;
    int hash[128] = { 0 };

    printf("Write a phrase to find how many unique characters it has(up to 9998 characters):");
    fgets(str, sizeof(str), stdin);

    printf("Input: %s", str);
    lenght = strlen(str);

    for(i=0;i<lenght;i++){
        hash[str[i]] = 1;
    }
    for(i-0;i<128;i++){
        unique += hash[i];
    }
    
    printf("The number of unique characters was: %d", unique);

return 0;
}