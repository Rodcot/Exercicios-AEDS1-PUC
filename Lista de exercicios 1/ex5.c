#include <stdio.h>

int main () {

int weight(int n1, int n2) {
    int peso;
    peso = n1 * n2;
    return peso;
}
    int a,b,c,d,e,f;

    printf("Digite sua primeira nota e seu respectivo peso:\n");
    scanf("%d %d",&a,&b);
    printf("Digite sua segunda nota e seu respectivo peso:\n");
    scanf("%d %d",&c,&d);
    printf("Digite sua terceira nota e seu respectivo peso:\n");
    scanf("%d %d",&e,&f);

    float avg = (weight(a,b) + weight(c,d) + weight(e,f)) / (b+d+f);
    printf("A sua média ponderada é de: %0.2f", avg);



return 0;
}



