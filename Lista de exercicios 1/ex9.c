#include <stdio.h>
#include <math.h>
int main() {

    float radius;
    printf("Digite o valor do raio de seu círculo:\n");
    scanf("%f", &radius);

    float area = (radius * radius) * M_PI;
    printf("A área do círculo é:%0.2f", area);

return 0;
}