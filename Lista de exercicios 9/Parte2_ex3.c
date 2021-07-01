#include <stdio.h>
#include <string.h>

int main(){
    char str[9999],key; 
    int lenght,i,count = 0,first,last,j=0,everyPosition[99];
    

    printf("Write a string(up to 9998 characters):");
    fgets(str, sizeof(str), stdin);

    printf("Input: %s", str);
    lenght = strlen(str);

    printf("Enter the character you want to find:");
    scanf("%c", &key);

    for(i=0;i<lenght;i++){
        if(str[i] == key){
            if(count==0){
                first = i;
            }
            count++;
            last = i;
            everyPosition[j] = i;
            j++;
        }
    }

    if(count == 0){
        printf("Character entered was not found in the string.");
    }else{
        printf("Character entered was found %d time(s).\n", count);
        printf("The first position was %d and the last was %d.\n", first+1, last+1);
        printf("These were all the positions the character was found:");
        for(i=0;i<j;i++){
            printf("[%d] ",everyPosition[i]);
        }
    }
    
return 0;
}