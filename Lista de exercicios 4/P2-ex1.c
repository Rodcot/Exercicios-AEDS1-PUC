#include <stdio.h>

long turntoBinary(int decimal){
    long binary = 0;
    int rem, temp = 1;

    while (decimal!=0){
        rem = decimal % 2;
        decimal = decimal / 2;
        binary = binary + rem*temp;
        temp = temp * 10;
    }
    return binary;
}

int main(){
    int num, finishedBinary;
    
    printf("Enter an intenger:\n");
    scanf("%d", &num);
    
    finishedBinary = turntoBinary(num);
    
    printf("Equivalent binary number is: %ld\n", finishedBinary);
    return 0;
}