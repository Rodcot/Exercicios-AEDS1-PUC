/* De novo eu ja calculei todos os números até o enésimo no primeiro exercicio então eu coloquei o mesmo programa*/
#include <stdio.h>
#include <math.h>

int main(){
    int firstTerm, commonDifference,nth,i,result;

    printf("Enter the first term and the common ratio of a geometric sequence:\n");
    scanf("%d %d", &firstTerm, &commonDifference);

    printf("Enter the nth term of the sequence you want to find:\n");
    scanf("%d", &nth);




    printf("The terms of the sequence until the %dth term are:\n", nth);
    for(i = 1; i <= nth; i++){
        result = firstTerm * pow(commonDifference, (i-1));
        printf("%d: %d\n", i, result);
    }
return 0;
}