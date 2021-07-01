#include <stdio.h>

int main(){

int alcool = 0, gasolina = 0, diesel = 0, choice;

LOOP:
printf("Digite o tipo de combustivel abastecido 1-Alcool 2-Gasolina 3-Diesel 4-Fim do program.\n");
scanf("%d", &choice);

if(choice == 4){
    printf("Muito obrigado.\n");
    goto END;
}
else if(choice == 1){
    alcool++;
    goto LOOP;
}
else if(choice == 2){
    gasolina++;
    goto LOOP;
}
else if(choice == 3){
    diesel++;
    goto LOOP;
}
else{
    printf("Numero invalido.\n");
    goto LOOP;
}

END:
printf("O numero de abastecimentos com alcool foram: %d\nCom gasolina foram: %d\nCom diesel foram: %d\n", alcool, gasolina, diesel);

return 0;
}