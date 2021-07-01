#include <stdio.h>
#include <string.h>

int main(){
    char str[9999],key; 
    int lenght,i,count = 0;
    

    printf("Write a string(up to 9998 characters):");
    fgets(str, sizeof(str), stdin);

    printf("Input: %s", str);
    lenght = strlen(str);

    printf("Enter the character you want to find:");
    scanf("%c", &key);

    for(i=0;i<lenght;i++){
        if(str[i] == key){
            count++;
        }
    }

    if(count == 0){
        printf("Character entered was not found in the string.");
    }else{
        printf("Character entered was found %d time(s).", count);
    }
    
return 0;
}