#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str[9999];
    int i=0;

    printf("Input the string :");
    fgets(str, sizeof str, stdin);	

    while(str[i]!='\0'){

        if(str[i] == 'a'){
            str[i] = '1';
        }
        else if(str[i] == 'e'){
            str[i] = '2';
        }
        else if(str[i] == 'i'){
            str[i] = '3';
        }
        else if(str[i] == 'o'){
            str[i] = '4';
        }
        else if(str[i] == 'u'){
            str[i] = '5';
        }

        i++;
    }

    printf("Output : %s", str);

return 0;
}
