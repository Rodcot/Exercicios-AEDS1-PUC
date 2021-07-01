#include <stdio.h>

int main(){

int i = 1, option, people = 0, total = 0;
double channel4 = 0, channel5 = 0, channel7 = 0, channel12 = 0, channel4Percentage = 0, channel5Percentage = 0, channel7Percentage = 0, channel12Percentage = 0;

for(;;){
LOOP:
    printf("Digite o numero do canal assistido (4,5,7,12) pela %d casa, ou digite 0 para terminar de digitar os dados:\n", i);
    scanf("%d", &option);

    if(option == 0){
        printf("Programa finalizando.\n");
        goto LEAVE;
    }

    printf("Digite o numero de pessoas estavam assistindo o canal nessa casa:\n");
    scanf("%d", &people);

    if(option == 4){
        channel4 = channel4 + people;
    }
    else if(option == 5){
        channel5 = channel5 + people;
    }
    else if(option == 7){
        channel7 = channel7 + people;
    }
    else if(option == 12){
        channel12 = channel12 + people;
    }
    else{
        printf("ERROR - Valor digitado invalido\n");
        goto ERROR;
    }

total = total + people;
i++;
}

LEAVE:

    channel5Percentage = 100 * channel5 / total;
    channel7Percentage = 100 * channel7 / total;
    channel12Percentage = 100 * channel12 / total;
    channel4Percentage = 100 * channel4 / total;

    printf("A porcentagem de audiencia do canal 4 foi de: %0.1lf%%\n", channel4Percentage);
    printf("A porcentagem de audiencia do canal 5 foi de: %0.1lf%%\n", channel5Percentage);
    printf("A porcentagem de audiencia do canal 7 foi de: %0.1lf%%\n", channel7Percentage);
    printf("A porcentagem de audiencia do canal 12 foi de: %0.1lf%%\n", channel12Percentage);

ERROR:

return 0;
}