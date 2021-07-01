#include <stdio.h>
int main() {

    float birth,date;
    printf("Digite o ano de seu nascimento e em seguida qual é o ano atual:\n");
    scanf("%f %f", &birth, &date);

    float age = date - birth;
    float future = 2050 - birth;
    printf("A sua idade é de: %0.0f anos, e em 2050 você terá: %0.0f anos", age, future);

}