#include <stdio.h> //Se eu tiver que dar return em todos os termos da sequencia eu vou ter que reescrever tanta coisa henrique :(
#include <math.h>

double geometricSequence(double nth, double firstTerm, double commonDifference){
    double i, result;
    for(i = 1; i <= nth; i++){
        result = firstTerm * pow(commonDifference, (i-1));
        printf("%.lf: %.2lf\n", i, result);
    }
    return(result);
}

int main(){
    double firstTerm, commonDifference,nth,i,result;

    printf("Enter the first term and the common ratio of a geometric sequence:\n");
    scanf("%lf %lf", &firstTerm, &commonDifference);

    printf("Enter the nth term of the sequence you want to find:\n");
    scanf("%lf", &nth);


    printf("The terms of the sequence until the %dth term are:\n", nth);
    result = geometricSequence(nth,firstTerm,commonDifference);
    printf("Result: %.2lf", result);
return 0;
}