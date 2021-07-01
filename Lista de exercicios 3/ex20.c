#include <stdio.h>

int main(){

int option,a1,a2,avg,weight,resultAW = 0,i;
double arithmetic,weightedAVG = 0;

for(;;){
    LOOP:
    printf("Escolha uma das opcoes:\n1.Media aritmetica\n2.Media ponderada\n3.Sair\n");
    scanf("%d", &option);

    if(option == 1){
        printf("Digite dois numeros para a media:\n");
        scanf("%d %d", &a1, &a2);
        arithmetic = (a1 + a2) / 2;
        printf("A media aritmetica dos numeros digitados foi de: %0.1lf\n", arithmetic);
    }
    else if(option == 2){
        for(i = 1; i < 4; i++){
            printf("Digite o %d numero da media e seu peso:\n", i);
            scanf("%d %d", &avg, &weight);
            resultAW = resultAW + avg * weight;
        }
        weightedAVG = resultAW / 3;
        printf("A media ponderada dos numeros digitados foi de: %0.1lf\n", weightedAVG);
    }
    else if(option == 3){
        printf("Opcao sair escolhida com sucesso.\n");
        goto LEAVE;
    }
    else{
        printf("ERROR - Opcao invalida.\n");
        goto LOOP;
    }
}

LEAVE:
return 0;
}