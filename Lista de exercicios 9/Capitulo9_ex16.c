#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str[9999];
    int character=0,number=0,space=0,i=0;

    printf("Input the string :");
    fgets(str, sizeof str, stdin);	

    while(str[i]!='\0'){

        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            character++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            number++;
        }else{
            space++;
        }

        i++;
    }

    printf("Amount of alphabets characters in the string is : %d\n", character);
    printf("Amount of numbers in the string is : %d\n", number);
    printf("Amount of spaces in the string is : %d", space-1);

return 0;
}
