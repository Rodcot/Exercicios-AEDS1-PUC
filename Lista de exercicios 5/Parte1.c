#include <stdio.h>
#include <math.h>

void menu(){
    printf("Choose an option:\n1)Sum\n2)Subtraction\n3)Multiplication\n4)Division\n5)Square Root\n6)Exponentiation\n7)Sine\n8)Cosine\n9)Right rectangle hypotenuse\n10)Tangent\n11)Logarithm\n12)Area of a rectangle\n13)Area of a circle\n14)Factorial\n0)Exit\n:");
}

void sum(int a, int b){
    int sum;
    sum = a + b;
    printf("The sum of the two numbers is: %d\n", sum);
}
void subtraction(int a, int b){
    int subtraction;
    subtraction = a - b;
    printf("The subtraction of the two numbers is: %d\n", subtraction);
}
void multiplication(int a, int b){
    int multiplication;
    multiplication = a * b;
    printf("The result of the multiplication is: %d\n", multiplication);
}
void division(double a, double b){
    double division;
    division = a / b;
    printf("The result of the division is: %.1lf\n", division);
}

void root(double x){
    double root;
    root = sqrt(x);
    printf("The square root of %.1lf is: %.1lf\n",x,root);
}
void exponentiation(double a, double b){
    double exponentiation;
    exponentiation = pow(a,b);
    printf("The result of the exponentiation is: %.1lf\n", exponentiation);
}
void sine(double x){
    double sine;
    sine = sin(x);
    printf("The sine of %.1lf is: %.1lf\n",x, sine);
}
void cosine(double x){
    double cosine;
    cosine = cos(x);
    printf("The cosine of %.1lf is: %.1lf\n",x, cosine);
}
void hypotenuse(double x, double y){
    double hypotenuse;
    hypotenuse = hypot(x,y);
    printf("The hypotenuse of the %.1lf, %.1lf triangle is: %.1lf\n", x, y, hypotenuse);
}
void tangent(double x){
    double tangent;
    tangent  = tan(x);
    printf("The tangent of %.1lf is: %.1lf\n", x, tangent);
}
void logarithm(double x){
    double logarithm;
    logarithm  = log10(x);
    printf("The log of %.1lf in base 10 is: %.1lf\n", x, logarithm);
}
void recArea(double x, double y){
    double recArea;
    recArea = x * y;
    printf("The area of the rectangle is: %.1lf\n", recArea);
}
void circArea(double x){
    double circArea;
    circArea = 3.14159*x*x;
    printf("The area of the circle is: %.1lf\n", circArea);
}
void factorial(double x){
    double factorial,originalx;
    originalx = x;
    for(factorial= 1; x > 1; x--){
        factorial = factorial * x;
    }
    printf("The factorial of %.1lf is: %.1lf\n", originalx, factorial);
}


int main(){

int option, a, b;
double x,y;

for(;;){

    menu();
    scanf("%d", &option);

    if(option == 0){
        printf("Finalizing the program.\n");
        goto EXIT;
    }
    else if(option == 1){
        printf("Choose two numbers for the sum:\n");
        scanf("%d %d", &a, &b);
        sum(a, b);
    }
    else if(option == 2){
        printf("Choose two numbers for the subtraction:\n");
        scanf("%d %d", &a, &b);
        subtraction(a,b);
    }
    else if(option == 3){
        printf("Choose two numbers for the multiplication:\n");
        scanf("%d %d", &a, &b);
        multiplication(a,b);
    }
    else if(option == 4){
        printf("Choose two numbers for the division:\n");
        scanf("%lf %lf", &x, &y);
        division(x,y);
    }
    else if(option == 5){
        printf("Choose a number to find the square root of:\n");
        scanf("%lf", &x);
        root(x);
    }
    else if(option == 6){
        printf("Choose a number to exponentiate and its power:\n");
        scanf("%lf %lf", &x, &y);
        exponentiation(x,y);
    }
    else if(option == 7){
        printf("Choose a number to find the sine of:\n");
        scanf("%lf", &x);
        sine(x);
    }
    else if(option == 8){
        printf("Choose a number to find the cosine of:\n");
        scanf("%lf", &x);
        cosine(x);
    }
    else if(option == 9){
        printf("Choose two number for the a and b sides of the triangle:\n");
        scanf("%lf %lf", &x, &y);
        hypotenuse(x,y);
    }
    else if(option == 10){
        printf("Choose a number to find the tangent of:\n");
        scanf("%lf", &x);
        tangent(x);
    }
    else if(option == 11){
        printf("Choose a number to find the log of in base 10:\n");
        scanf("%lf", &x);
        logarithm(x);
    }
    else if(option == 12){
        printf("Choose two numbers to form the rectangle:\n");
        scanf("%lf %lf", &x, &y);
        recArea(x,y);
    }
    else if(option == 13){
        printf("Choose the radius of the circle:\n");
        scanf("%lf", &x);
        circArea(x);
    }
    else if(option == 14){
        printf("Choose a number to find the factorial of:\n");
        scanf("%lf", &x);
        factorial(x);
    }


}
EXIT:

return 0;
}