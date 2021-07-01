#include <stdio.h>
#include <math.h>

int main(){

int num, numTotal = 0, numCount = 0;
double numAvg = 0, standardDeviation = 0, standardDeviationFinished = 0;

for(;;){
    printf("Enter a number for the calculations, or 0 to finish the program:\n");
    scanf("%d", &num);

    if(num == 0){
        printf("Finalizing program.\n");
        goto END;
    }
standardDeviation = standardDeviation + (num * num);
numTotal = num + numTotal;
numCount++;
}
END:

standardDeviationFinished = sqrt(standardDeviation / numCount);
numAvg = (double)numTotal / (double)numCount;

printf("The average of the numbers entered was: %0.2lf\nThe standard deviation was: %0.2lf\n", numAvg, standardDeviationFinished);

return 0;
}