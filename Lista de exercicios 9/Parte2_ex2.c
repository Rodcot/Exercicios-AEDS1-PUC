#include <stdio.h>
#include <string.h>

int main(){
    char str[9999];

    printf("Write a string to reverse (up to 9998 characters):");
    fgets(str, sizeof(str), stdin);

    printf("Input:\n%s\n", str);
    
    printf("Output:%s", strrev(str));

return 0;
}