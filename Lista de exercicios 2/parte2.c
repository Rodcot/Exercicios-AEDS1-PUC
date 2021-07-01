#include <stdio.h>

int main (){

double codigo,total,faltas,ntrabalho,nprova1,nprova2,nprova3,reavaliacao,frequencia,ntotal,menornota;
printf("Digite o codigo da disciplina:\n");
scanf("%lf", &codigo);
printf("Digite o numero total de aulas e em seguida de suas faltas no semestre:\n");
scanf("%lf %lf", &total, &faltas);
printf("Digite sua nota de trabalhos e exercios e de cada uma de suas provas em sequencia:\n");
scanf("%lf %lf %lf %lf", &ntrabalho, &nprova1, &nprova2, &nprova3);

frequencia = total - faltas;
ntotal = ntrabalho + nprova1 + nprova2 + nprova3;

if(ntotal > 60){
    if(frequencia > total * 0.75){
        printf("APROVADO");
    }
    else{
        printf("REPROVADO");
    }
}
else{
    printf("Digite sua nota na reavaliacao:\n");
    scanf("%lf", &reavaliacao);
    if(nprova1 < nprova2 && nprova1 < nprova2){
        nprova1 = menornota;
    }
    else if(nprova2 < nprova1 && nprova2 < nprova3){
        nprova2 = menornota;
    }
    else{
        nprova3 = menornota;
    }
    ntotal = ntrabalho + nprova1 + nprova2 + nprova3;
    if(ntotal > 60){
        if(frequencia > total * 0.75){
            printf("APROVADO");
    }
        else{
            printf("REPROVADO");
    }
    }
    else{
        printf("REPROVADO");
    }
}

return 0;
}