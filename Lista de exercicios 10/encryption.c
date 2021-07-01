#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fileRead, *fileWrite;
    char c;
    int key;

    fileRead = fopen("original.txt", "r");
    if(fileRead == NULL){
        printf("Cannot open file original.txt\n");
        exit(0);
    }

    fileWrite = fopen("encrypted.txt", "w");
    if(fileWrite == NULL){
        printf("Cannot open file encrypted.txt\n");
        exit(0);
    }

    c = fgetc(fileRead);

    printf("Enter the key of the encryption:");
    scanf("%d", &key);

    while(c != EOF){
        fputc(c+key, fileWrite);
        c = fgetc(fileRead);
    }

    printf("Contents encrypted to encrypted.txt successfully.");

    fclose(fileRead);
    fclose(fileWrite);

return 0;
}