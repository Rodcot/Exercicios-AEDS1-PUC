#include <stdio.h> // Acho que eu ja fiz o que eu tinha que fazer na parte 2

int sum(int factor, int num){
    int numtotal = 0;
    while (factor > 1){
        factor = factor / 10;

        printf("%d ", num / factor);

        numtotal += num / factor;
        num = num % factor;
    }
    printf("\nTotal: %d", numtotal);
return(numtotal);
}

int multiplication(int factor, int num){
    int numtotal = 1;
    while (factor > 1){
        factor = factor / 10;
        numtotal *= num / factor;
        num = num % factor;
    }
    printf("Total: %d\n", numtotal);
return(numtotal);
}

int main(){
    int num, temp, factor = 1, sumResult, multResult;

    printf("Enter a number: ");

    scanf("%d", &num);
    temp = num;

    while (temp){
        temp = temp / 10;
        factor = factor * 10;
    }

    printf("Each digit of the given number are: ");

    sumResult = sum(factor, num);
    printf("\nThe total sum of each digit is = %d\n", sumResult);

    multResult = multiplication(factor,num);
    printf("The total multiplication of each digit is = %d\n", multResult);

return 0;
}