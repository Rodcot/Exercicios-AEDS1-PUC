#include <stdio.h>
#include <string.h>

int main(){
    char str[9999];
    int lenght,i,countWord=0;

    printf("Write a phrase to split (up to 9998 characters):");
    fgets(str, sizeof(str), stdin);

    printf("Input: %s", str);
    lenght = strlen(str);

    printf("Output: ");
    for(i=0;i<lenght;i++){
        LOOP:
        if(str[i]==' ' && str[i+1] == ' '){
            memmove(&str[i+1], &str[i+2], strlen(str) - i);
            goto LOOP;
        }
        if(str[i]==' '){
            if(str[i-1] == ' ' || str[i-1] == '\0'){
                memmove(&str[i], &str[i+1], strlen(str) - i);    
            }
        }

    }

    lenght = strlen(str);
    for(i=0;i<lenght;i++){
   
        if(str[i]==' '){
            countWord++;
        }

    }
    printf("\n%s\nWord count = %d", str, countWord+1);

return 0;
}