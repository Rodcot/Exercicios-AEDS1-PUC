#include <stdio.h>
#include <string.h>

int main(){
    char str[9999],placeholder[1];
    int lenght,i,j;

    printf("Write a phrase for the cryptography (up to 9998 characters):");
    fgets(str, sizeof(str), stdin);

    printf("Input: %s\n", str);
    lenght = strlen(str);

    for(i=0;i<lenght;i++){    
        if(str[i]=='a' || str[i] =='A'|| str[i]=='e' || str[i] =='E'|| str[i]=='i' || str[i] =='I'|| str[i]=='o' || str[i] =='O'|| str[i]=='u' || str[i] =='U'){
            str[i] =  '#';
        }
    }

    strrev(str);

    printf("Output: %s\n", str);

return 0;
}