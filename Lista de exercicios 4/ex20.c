#include <stdio.h>

int main (){

int num1, num2, counter = 0;
double division;
char choice;

LOOP:
printf("Enter two intenger numbers for the division (second number cant be 0):\n");
scanf("%d %d", &num1, &num2);

if(num2 == 0){
    printf("ERROR - Invalid number.\n");
    goto LOOP;
}

division = (double)num1 / (double)num2;

printf("The result of the division was: %0.2lf\n", division);

counter++;

RETRY:
printf("Do you wish to do another division (Y/N):\n");
scanf(" %c", &choice);

if(choice == 'Y' || choice == 'y'){
    goto LOOP;
}
else if(choice == 'N' || choice == 'n'){
    printf("The number of calculations made were: %d\n", counter);
}
else{
    printf("ERROR - invalid choice.\n");
    goto RETRY;
}

return 0;
}