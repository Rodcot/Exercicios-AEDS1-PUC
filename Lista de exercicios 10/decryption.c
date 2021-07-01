#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fileRead, *fileWrite;
    char c;
    int key;

    fileRead = fopen("encrypted.txt", "r");
    if(fileRead == NULL){
        printf("Cannot open file encrypted.txt\n");
        exit(0);
    }

    fileWrite = fopen("decrypted.txt", "w");
    if(fileWrite == NULL){
        printf("Cannot open file decrypted.txt\n");
        exit(0);
    }

    c = fgetc(fileRead);

    printf("Enter the key of the encryption\n(it has to be accurate or the decryption will fail):");
    scanf("%d", &key);

    while(c != EOF){
        fputc(c-key, fileWrite);
        c = fgetc(fileRead);
    }

    printf("Contents decrypted to decrypted.txt successfully.");

    fclose(fileRead);
    fclose(fileWrite);

return 0;
}