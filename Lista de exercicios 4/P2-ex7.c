#include <stdio.h>

int main(){


int a,b,bigger,bigger2,smaller, i = 0, i2,difference;
int list[99999];
double cubes = 0;

for(;;){
    printf("Enter two numbers or type 0 and 0 to end the program.:\n");
    scanf("%d %d", &a, &b);

    if(a == 0 && b == 0){
        printf("Finalizing program.\n");
        goto END;
    }

    if(a > b){
        bigger = a;
        smaller = b;
    }else{
        bigger = b;
        smaller = a;
    }
    difference = bigger - smaller;
    for(; bigger >= smaller; bigger--){
        list[i] = bigger;
        if(bigger % 2 == 0){
            cubes = cubes + (bigger * bigger * bigger);
        }
        i++;
    }

printf("The interval between the two numbers is:");
for(i2 = 0; i2 <= difference; i2++){
    printf(" %d,", list[i2]);
}
printf("\nThe sum of the cube of even numbers in the interval was: %.1lf\n", cubes);
}

END:
return 0;
}