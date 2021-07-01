#include <stdio.h>
#include <string.h>

int main(){
    char str[9999],new[99][99];
    int lenght,i,j=0,words=0;

    printf("Write a phrase fo the criptography (up to 9998 characters):");
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

    printf("Output: ");
    for(i=0;i<=words;i++){
        if(i == 0){
            printf("%s ", new[words]);// por algum motivo aqui é como se tivesse um \n na hora do printf(?)
        }else if(i == words){
            printf("%s ", new[0]);
        }else{
            printf("%s ", new[i]);
        }
    }

return 0;
}