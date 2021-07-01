#include <stdio.h>
#include <string.h>

int main(){
    char str[9999],new[99][99],final[99];
    int lenght,i,spaceCount=0,j=0,words=0,cryptlenght,k=0,cryptlenght2,crypt3=0;

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

    j=0;
    for(i=0;i<=words;i++){
        if(i%2==0){
            cryptlenght = strlen(new[i])+strlen(new[i-1]);// por algum motivo essa conta da errado e eu não consigo arrumar.
            cryptlenght2=cryptlenght;
            for(;j<=cryptlenght+crypt3;){
                final[j] = new[i][k];
                final[j+1] = new[i+1][cryptlenght2];
                k++;
                cryptlenght2--;
                j += 2;
                printf("j: %d\n", j);
                printf("cryptlen: %d\n",cryptlenght);
            }
            j++;
            final[j] = ' ';
            crypt3 += cryptlenght;
        }
        k=0;
    }

    printf("Output: %s", final);

return 0;
}