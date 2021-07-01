#include <stdio.h>

int main() {

int i15,i16_30,i31_45,i46_60,i61,idade,i;
i15=i16_30=i31_45=i46_60=i61=0;

for(i = 0; i < 8; i++){
    printf("Digite a %d idade:\n", i+1);
    scanf("%d", &idade);

    if(idade <= 15){
        i15 = i15 + 1;
    }
    else if(idade >= 16 && idade <= 30){
        i16_30 = i16_30 + 1;
    }
    else if(idade >= 31 && idade <= 45){
        i31_45 = i31_45 + 1;
    }
    else if(idade >= 46 && idade <= 60){
        i46_60 = i46_60 + 1;
    }
    else{
        i61 = i61 + 1;
    }
}
printf("O numero de pessoas ate 15 anos e de: %d\n", i15);
printf("O numero de pessoas de 16 a 30 anos e de: %d\n", i16_30);
printf("O numero de pessoas de 31 a 45 anos e de: %d\n", i31_45);
printf("O numero de pessoas de 46 a 60 anos e de: %d\n", i46_60);
printf("O numero de pessoas com mais de 60 anos e de: %d\n", i61);

double p15 = 100 * i15 / 8;
double p61 = 100 * i61 / 8;

printf("%0.0lf%% das pessoas sao do grupo de ate 15 anos \n", p15);
printf("%0.0lf%% das pessoas sao do grupo de mais de 60 anos\n", p61);

return 0;
}