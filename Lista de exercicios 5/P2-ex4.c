#include <stdio.h>

double volumeOfCircle(int x){
    double result;
    result = x*x*x*4/3;
    return(result);
}

int main(){
    int radius;
    double volume;

    printf("Enter the radius of a circle:\n");
    scanf("%d", &radius);
    volume = volumeOfCircle(radius);

    printf("The volume of the circle is: %.1lf", volume);

return 0;
}