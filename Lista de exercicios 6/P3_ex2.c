#include <stdio.h> //Se eu tiver que dar return em todos os termos da sequencia eu vou ter que reescrever tanta coisa henrique :(

int arithmeticSequence(int nth, int firstTerm, int commonDifference){
    int result,i;
    printf("The terms of the sequence until the %dth term are:\n", nth);
    for(i = 1; i <= nth; i++){
        result = firstTerm + (i - 1)*commonDifference;
        printf("%d: %d\n", i, result);
    }
    return(result);
}

int main(){
    int firstTerm, commonDifference,nth,i,result;

    printf("Enter the first term and the common difference of an arithmetic sequence:\n");
    scanf("%d %d", &firstTerm, &commonDifference);

    printf("Enter the nth term of the sequence you want to find:\n");
    scanf("%d", &nth);

    result = arithmeticSequence(nth, firstTerm, commonDifference);
    printf("Result again: %d", result);
return 0;
}