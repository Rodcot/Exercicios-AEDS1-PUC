#include <stdio.h>

void menu(){
    printf("Choose an option\n0- Exit program\n1- Inches to centimeters\n2- Centimeters to inches\n3- Fahrenheit to Celsius\n4- Celsius to Fahrenheit\n:");
}
void inchToCent(){
    double inch,cent;
    printf("Enter inches:");
    scanf("%lf", &inch);
    cent = 2.54*inch;
    printf("Corresponding centimeters = %.2lf\n", cent);
}
void centToInch(){
    double inch,cent;
    printf("Enter centimeters:");
    scanf("%lf", &cent);
    inch = cent/2.54;
    printf("Corresponding inches = %.2lf\n", inch);
}
void fahToCel(){
    double fah,cel;
    printf("Enter fahrenheits:");
    scanf("%lf", &fah);
    cel = (fah-32)/1.8;
    printf("Corresponding centimeters: %.2lf\n", cel);
}
void celToFah(){
    double fah,cel;
    printf("Enter centimeters:");
    scanf("%lf", &cel);
    fah = (cel*1.8)+32;
    printf("Corresponding fahrenheits: %.2lf\n", fah);
}

int main(){
    int option;

for(;;){
    menu();
    scanf("%d", &option);

    if(option == 1){
        inchToCent();
    }else if(option == 2){
        centToInch();
    }else if(option == 3){
        fahToCel();
    }else if(option == 4){
        celToFah();
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