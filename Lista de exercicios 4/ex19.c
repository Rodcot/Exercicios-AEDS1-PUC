#include <stdio.h>

int main(){

int nstudents, i, acounter = 0, pcounter = 0, nstudents2, percentcounter = 0;
char cletter, status;
double registration, absency;

for(i = 1; i <= 14; i++){
    printf("Enter the %d class identifier(A,B,C...):\n", i);
    scanf(" %c", &cletter);
    printf("Enter the number of students in this class:\n");
    scanf("%d", &nstudents);
    nstudents2 = nstudents;

    for(;nstudents > 0; nstudents--){
        printf("Enter student registration number:\n");
        scanf("%lf", &registration);
        printf("Enter A(absent) or P(present) for student status:\n");
        scanf(" %c", &status);
        
        if(status == 'A' || status == 'a'){
            acounter++;
        }
        else if(status == 'P' || status == 'p'){
            pcounter++;
        }
        else{
            printf("Error - invalid character.\n");
        }
    }
    absency = 100 * acounter / nstudents2;
    printf("The absence percentage for class %c was: %0.1lf%%\n", cletter, absency);
    if(absency > 5){
        percentcounter++;
    }
    acounter = 0;
    pcounter = 0;
}
printf("The total number of classes with more than 5%% percent of absency was: %d\n", percentcounter);

return 0;
}