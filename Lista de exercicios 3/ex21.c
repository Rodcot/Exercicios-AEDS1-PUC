#include <stdio.h>

int main(){

int count = 1, vote, totalVotes = 0, oneCount = 0, twoCount = 0, threeCount = 0, fourCount = 0, nullCount = 0, blankCount = 0;
double nullPercentage, blankPercentage;

for(;;){
    LOOP:
    printf("Digite o %d voto, ou 0 para finalizar o programa:\n", count);
    scanf("%d", &vote);

    if(vote == 0){
        printf("Finalizando o programa.\n");
        goto LEAVE;
    }

    if(vote == 1){
        oneCount++;
    }
    else if(vote == 2){
        twoCount++;
    }
    else if(vote == 3){
        threeCount++;
    }
    else if(vote == 4){
        fourCount++;
    }
    else if(vote == 5){
        nullCount++;
    }
    else if(vote == 6){
        blankCount++;
    }
    else{
        printf("ERROR - Valor digitado invalido.\n");
        goto LOOP;
    }
totalVotes++;
}

LEAVE:

nullPercentage = 100 * nullCount / totalVotes;
blankPercentage = 100 * blankCount / totalVotes;

printf("O total de votos para o candidato 1 foi de: %d\n", oneCount);
printf("O total de votos para o candidato 2 foi de: %d\n", twoCount);
printf("O total de votos para o candidato 3 foi de: %d\n", threeCount);
printf("O total de votos para o candidato 4 foi de: %d\n", fourCount);

printf("O total de votos nulos foi de: %d\n", nullCount);
printf("O total de votos em branco foi de: %d\n", blankCount);
printf("A porcentagem de votos nulos do total foi de: %0.1lf%%\n", nullPercentage);
printf("A porcentagem de votos em branco do total foi de: %0.1lf%%\n", blankPercentage);

return 0;
}