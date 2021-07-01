#include <stdio.h>
#include <string.h>

int main(){
    char str[9999];
    int lenght,i;

    printf("Write a phrase to split (up to 9998 characters):");
    fgets(str, sizeof(str), stdin);

    printf("Input: %s", str);
    lenght = strlen(str);

    printf("Output:\n");
    for(i=0;i<lenght;i++){    
        if(str[i]==' '){
            printf("\n");
        }else{
            printf("%c", str[i]);
        }
    }
    

return 0;
}