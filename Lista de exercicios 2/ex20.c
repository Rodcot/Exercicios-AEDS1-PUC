#include <stdio.h>

int main(){

int idade;
printf("Digite a sua idade:\n");
scanf("%d", &idade);

if(idade >=5 && idade <= 7){
    printf("A sua idade esta na categoria Infantil");
}
else if(idade >=8 && idade <= 10){
    printf("A sua idade esta na categoria Juvenil");
}
else if(idade >=11 && idade <= 15){
    printf("A sua idade esta na categoria Adolescente");
}
else if(idade >=16 && idade <= 30){
    printf("A sua idade esta na categoria Adulto");
}
else if(idade > 30){
    printf("A sua idade esta na categoria Senior");
}
else{
    printf("ERRO - idade muito baixa");
}

return 0;
}