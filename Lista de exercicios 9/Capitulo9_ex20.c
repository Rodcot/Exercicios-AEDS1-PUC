#include <stdio.h>
#include <string.h>

int main(){
    char str[9999];
    int lenght,i;

    printf("Write a phrase to split (up to 9998 characters):");
    fgets(str, sizeof(str), stdin);

    lenght = strlen(str);

    printf("\nOutput: ");
    for(i=0;i<lenght;i++){    
        printf("%d ", (int)str[i]);
    }

    printf("\n\nInput: %s", str);

return 0;
}