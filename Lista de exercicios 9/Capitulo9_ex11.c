#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int x = 0, e, j, d, k, space = 0;
    char a[50], b[15][20], c[15][20];

    printf("Read a string:\n");
    fflush(stdin);
    scanf("%[^\n]s", a);

    for (x=0;a[x]!='\0';x++){
        if (a[x] == ' '){
            space++;   
        }   
    }

    x = 0;

    for(j=0;j<(space + 1);x++,j++){
        k=0;
        while(a[x] != '\0'){
            if(a[x] == ' '){
                break;
            }else{
                b[j][k++] = a[x];
                x++;
            }
        }
        b[j][k] = '\0';
    }

    x = 0;
    strcpy(c[x], b[x]);

    for(e=1;e<=j;e++){
        for(d=0; d<=x;d++){
            if(strcmp(c[x], b[e]) == 0){
                break;    
            }else{
                x++;
                strcpy(c[x], b[e]);
                break;
            }
        }
    }

    printf("Number of unique words in \'%s\' are: %d", a, x);

    return 0;
}