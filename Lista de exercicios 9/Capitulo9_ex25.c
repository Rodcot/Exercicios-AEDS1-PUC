#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str[9999],arrayVogals[100],arrayI[100];
    int i=0,x=0,ln,k;

    printf("Input the string :");
    fgets(str, sizeof str, stdin);	

    ln = strlen(str);

    while(str[i]!='\0'){

        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            arrayVogals[x] = str[i];
            arrayI[x] = i;
            x++;
            for(k=i;k<ln;k++){
                str[k] = str[k+1];
            }
        }

        i++;
    }

    printf("Output : %s", str);
    printf("Output: ");
    x=0;
    for(i=0;i<ln;i++){
        if(arrayI[x] == i){
            printf("%c",arrayVogals[x]);
            x++;
        }
        printf("%c",str[i]);
    }

return 0;
}
