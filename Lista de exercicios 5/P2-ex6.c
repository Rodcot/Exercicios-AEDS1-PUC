#include <stdio.h>


double ideal(double height, int sex){
    double ideal;

    if(sex == 1){
        ideal = 72.7*height-58;
    }
    else{
        ideal = 62.1*height-44.7;
    }
    return(ideal);
}


int main(){
    int sex;
    double height,result;

    printf("Enter your height and sex(1- Male, 2- Female):\n");
    scanf("%lf %d", &height, &sex);

    result = ideal(height,sex);

    printf("Ideal weighth is : %.1lf", result);

return 0;
}