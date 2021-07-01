#include <stdio.h>

int main(){

int i, opnionSCount = 0, opnionNCount = 0, womanSCount = 0, maleNCount = 0, maleTotalCount = 0;
char sexo,opnion;

for(i = 1; i < 16; i++){
    printf("Digite 'F' - feminino ou 'M' - masculino, para representar o sexo do %d participante:\n", i);
    scanf(" %c", &sexo);
    printf("Digite 'S' - Sim ou 'N' - Nao para representar se o partipante gostou ou nao do produto:\n");
    scanf(" %c", &opnion);

    if(opnion == 'S' || opnion == 's'){
        opnionSCount++;
    }
    else if(opnion == 'N' || opnion == 'n'){
        opnionNCount++;
    }
    else{
        printf("ERROR - Caracter de opniao digitado invalido.");
        goto ERROR;
    }
 
    if(sexo == 'M' || sexo == 'm'){
        maleTotalCount++;
    }   
    if((opnion == 'S' || opnion == 's') && (sexo == 'F' || sexo == 'f')){
        womanSCount++;
    }
    if((opnion == 'N' || opnion == 'n') && (sexo == 'M' || sexo == 'm')){
        maleNCount++;
    }
}

printf("O numero de pessoas que responderam sim e de: %d\n", opnionSCount);
printf("O numero de pessoas que responderam nao e de: %d\n", opnionNCount);
printf("O numero de mulheres que responderam sim e de: %d\n", womanSCount);

double maleNPercentage = 100 * maleNCount / maleTotalCount;

printf("A porcentagem de homens, do total analisado, que responderam nao foi de: %0.1lf", maleNPercentage);

ERROR:

return 0;
}