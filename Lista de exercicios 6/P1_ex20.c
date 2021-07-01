#include <stdio.h>

double AvgSalary(double x, double y){
    double Avg = x / y;
    printf("The average salary was: %.2lf\n", Avg);
}
double AvgChildren(double x, double y){
    double Avg = x / y;
    printf("The average of children per family was: %.2lf\n", Avg);
}
double PercentageBelow380(double x, double y){
    double Percentage = (x / y) * 100;
    printf("The percentage of people with salaries below 380: %.2lf%%\n", Percentage);
}


int main(){
    double salary, children, Ctotal = 0, Stotal = 0, generalCount = 0, CountBelow380 = 0, HighestSalary = 0;

    for(;;){
        printf("Enter your salary and number of children you have, or enter 0 to end the program:\n");
        scanf("%lf", &salary);
        if(salary == 0){
            printf("Finalizing program.\n");
            goto END;
        }
        scanf("%lf", &children);

        if(salary < 380){
            CountBelow380++;
        }
        if(HighestSalary == 0){
            HighestSalary = salary;
        }else if(salary > HighestSalary){
            HighestSalary = salary;
        }

        Stotal += salary, Ctotal += children;
        generalCount++;
    }
    END:

    AvgSalary(Stotal, generalCount);
    AvgChildren(Ctotal, generalCount);
    PercentageBelow380(CountBelow380, generalCount);
    printf("The highest salary was: %.2lf\n", HighestSalary);

return 0;
}