#include <stdio.h>

void menu(){
    printf("Choose an option\n0- Exit program\n1- Inches to centimeters\n2- Centimeters to inches\n3- Fahrenheit to Celsius\n4- Celsius to Fahrenheit\n:");
}
double inchToCent(){
    double cent,inch;
    printf("Enter inches:");
    scanf("%lf", &inch);
    cent = 2.54*inch;
    printf("Corresponding centimeters = %.2lf\n", cent);
    return(cent);
}
double centToInch(){
    double inch,cent;
    printf("Enter centimeters:");
    scanf("%lf", &cent);
    inch = cent/2.54;
    printf("Corresponding inches = %.2lf\n", inch);
    return(inch);
}
double fahToCel(){
    double fah,cel;
    printf("Enter fahrenheits:");
    scanf("%lf", &fah);
    cel = (fah-32)/1.8;
    printf("Corresponding centimeters: %.2lf\n", cel);
    return(cel);
}
double celToFah(){
    double fah,cel;
    printf("Enter centimeters:");
    scanf("%lf", &cel);
    fah = (cel*1.8)+32;
    printf("Corresponding fahrenheits: %.2lf\n", fah);
    return(fah);
}

int main(){
    int option;
    double cent,inch,fah,cel;

for(;;){
    menu();
    scanf("%d", &option);

    if(option == 1){
        cent = inchToCent();
        printf("Centimeters: %.2lf\n", cent);
    }else if(option == 2){
        inch = centToInch();
        printf("Inches: %.2lf\n", inch);
    }else if(option == 3){
        cel = fahToCel();
        printf("Celsius: %.2lf\n", cel);
    }else if(option == 4){
        fah = celToFah();
        printf("Fahrenheit: %.2lf\n", fah);
    }else if(option == 0){
        printf("Finalizing program.\n");
        goto END;
    }else{
        printf("Invalid option.\n");
    }
}
END:
return 0;
}