#include <stdio.h>

int time(int seconds, int minutes, int hours){
    int total, totalMinutes, totalHours;
    totalMinutes = minutes * 60;
    totalHours = hours*60*60;
    total = totalHours + totalMinutes + seconds;
    return(total);
}

int main(){
    int seconds,minutes,hours,total;

    printf("Enter number of seconds, minutes and hours, respectively:\n");
    scanf("%d %d %d", &seconds, &minutes, &hours);

    total = time(seconds, minutes, hours);
    printf("The total number of seconds is: %d\n", total);

return 0;
}