#include <stdio.h>
int main(){

    float base, height;
    printf("Digite a base e altura do triângulo:\n");
    scanf("%f %f", &base, &height);

    float area = (base * height) / 2;
    printf("A área do triângulo é de:%0.2f", area);


return 0;
}