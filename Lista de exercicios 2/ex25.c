#include <stdio.h>

int main(){

int hextra,hfalta;
double Hhoras,Hminutos;
printf("Digite o seu numero de horas extras e em seguida o de horas faltas:\n");
scanf("%d %d", &hextra, &hfalta);

Hhoras = hextra - ( 2/3 * (hfalta));
Hminutos = Hhoras * 60;

if(Hminutos >= 2400){
    printf("Seu premio e de RS500");
}
else if(Hminutos < 2400 && Hminutos >= 1800){
    printf("Seu premio e de RS400");
}
else if(Hminutos < 1800 && Hminutos >= 1200){
    printf("Seu premio e de RS300");
}

else if(Hminutos < 1200 && Hminutos >= 600){
    printf("Seu premio e de RS200");
}
else{
    printf("Seu premio e de RS100");
}

return 0;
}