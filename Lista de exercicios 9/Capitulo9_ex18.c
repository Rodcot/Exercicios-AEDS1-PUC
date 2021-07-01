#include <stdio.h>
#include <string.h>

int main(){
    char str[9999],new[99][99];
    int lenght,i,j=0,words=0,newlenght,half;

    printf("Write a phrase for the criptography (up to 9998 characters):");
    fgets(str, sizeof(str), stdin);

    printf("Input: %s", str);
    lenght = strlen(str);

    for(i=0;i<lenght;i++){
        if(str[i]==' '){
            new[words][j]='\0';
            words++;
            j=0;
        }else{
            new[words][j]=str[i];
            j++;
        }
    }

    
    for(i=0;i<=words;i++){
        newlenght = strlen(new[i]);
        half = newlenght/2;
        for(j=0;j<half;j++){
            new[i][newlenght-1] = '?';
            newlenght--;
        }
    }

    printf("Output: ");
    for(i=0;i<=words;i++){
        printf("%s ", new[i]);
    }

return 0;
}