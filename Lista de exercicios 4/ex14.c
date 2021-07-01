#include <stdio.h>

int main(){

int students,i,score,scoreTotal = 0;
double Average = 0;

printf("Enter the number of students in the class:\n");
scanf("%d", &students);

for (i = 1; i < students+1; i++){
    printf("Enter the %d student score:\n", i);
    scanf("%d", &score);
    scoreTotal = scoreTotal + score;
}

Average = (double)scoreTotal / (double)students;
printf("The arithmetic average from this class is: %0.1lf", Average);


return 0;
}