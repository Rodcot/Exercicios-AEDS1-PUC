/* Eu acho que eu fiz as duas questões no primeiro exércicio então eu só copiei e colei*/
#include <stdio.h>

int main(){
    int firstTerm, commonDifference,nth,i,result;

    printf("Enter the first term and the common difference of an arithmetic sequence:\n");
    scanf("%d %d", &firstTerm, &commonDifference);

    printf("Enter the nth term of the sequence you want to find:\n");
    scanf("%d", &nth);




    printf("The terms of the sequence until the %dth term are:\n", nth);
    for(i = 1; i <= nth; i++){
        result = firstTerm + (i - 1)*commonDifference;
        printf("%d: %d\n", i, result);
    }
return 0;
}