#include <stdio.h>

int main(){

int password;

LOOP:
printf("Enter the password:\n");
scanf("%d", &password);

if(password == 1234){
    printf("Acess granted.\n");
}
else{
    printf("Invalid password. Try again\n");
    goto LOOP;
}


return 0;
}