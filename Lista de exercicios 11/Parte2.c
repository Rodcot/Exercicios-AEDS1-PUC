#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

//Declaração de váriaveis globais.
int num1=0, num2=0; //1-Vendedores, 2-Venda.

//Declaração das structures.
struct VENDEDOR{
    int COD_VENDEDOR;
    int VENDAS_NO_MES[12];
}vendedores[4];

struct VENDA{
    int COD_VENDEDOR;
    int MES;
    double VALOR;
}vendas[60];


//Função para cadastrar os vendedores.
void CadastroVendedor(){
    system("clear");
    //Registrando o codigo de vendedor
    LOOP_CadastroVendedor:
    printf("Digite o codigo do vendedor: ");
    scanf("%d", &vendedores[num1].COD_VENDEDOR);

    for(int i=0;i<num1;i++){
        //Checando para ver se o codigo ja existe.
        if(vendedores[num1].COD_VENDEDOR == vendedores[i].COD_VENDEDOR){
            printf("Codigo ja existente. Tente Novamente\n");
            goto LOOP_CadastroVendedor;
        }
    }

    printf("Cadastro Realizado.");
    num1++;
}


//Função para cadastrar as vendas.
void CadastroVendas(){
    bool existe_vendedor=false;

    system("clear");
    //Registrando o codigo do vendedor que fez a venda.
    while(existe_vendedor != true){
        printf("Digite o codigo do vendedor que realizou a venda: ");
        scanf("%d", &vendas[num2].COD_VENDEDOR);

        for(int i=0;i<num1;i++){
            //Checando para ver se o codigo é válido.
            if(vendas[num2].COD_VENDEDOR == vendedores[i].COD_VENDEDOR){
                existe_vendedor = true;
            }
        }
        if(existe_vendedor != true){
            printf("Codigo de vendedor nao existente. Tente novamente.\n");
        }
    }

    //Registrando o mês que ocorreu a venda.
    system("clear");
    LOOP_CadastroVendasMes:
    printf("Digite o mes da venda(1-12): ");
    scanf("%d", &vendas[num2].MES);

    if(vendas[num2].MES<1 && vendas[num2].MES>12){
        //Checando para ver se o mês digitado é válido.
        printf("Numero digitado invalido. Tente Novamente.\n");
        goto LOOP_CadastroVendasMes;    
    }
    //Checando se o vendedor já realizou uma vendo no mês.
    for(int i=0;i<num1;i++){
        if(vendas[num2].COD_VENDEDOR == vendedores[i].COD_VENDEDOR){
            if(vendedores[i].VENDAS_NO_MES[vendas[num2].MES] == 1){
                printf("O vendedor ja tem uma venda nesse mes. Tente outro mes.\n");
                goto LOOP_CadastroVendasMes;
            }else{
                vendedores[i].VENDAS_NO_MES[vendas[num2].MES] = 1;
            }
        }
    }

    //Registrando o valor da venda.
    system("clear");
    printf("Digite o valor da venda realizada: ");
    scanf("%d", &vendas[num2].VALOR);


    printf("Cadastro Realizado.");
    num2++;
}


//Fução para consultar as vendas de um funcionário em um determinado mês.
void ChecarVendasMes(){
    int tempCOD,tempMES;
    bool existe_vendedor=false, existe_mes=false;

    system("clear");

    //Registrando o codigo do vendedor para consultar.
    while(existe_vendedor != true){
        printf("Digite o codigo do vendedor que realizou a venda: ");
        scanf("%d", &tempCOD);

        for(int i=0;i<num1;i++){
            //Checando para ver se o codigo é válido.
            if(tempCOD == vendedores[i].COD_VENDEDOR){
                existe_vendedor = true;
            }
        }
        if(existe_vendedor != true){
            printf("Codigo de vendedor nao existente. Tente novamente.\n");
        }
    }

    //Registrando o mes que se deseja consultar.
    printf("Digite o mes que deseja consultar: ");
    scanf("%d", &tempMES);

    //Checando se existe venda do vendedor no mes digitado.
    for(int i=0;i<num1;i++){
        if(tempCOD == vendedores[i].COD_VENDEDOR){
            for(int j=0;j<num2;j++){
                if(vendedores[i].COD_VENDEDOR == vendas[j].COD_VENDEDOR){
                    if(tempMES == vendas[j].MES){
                        printf("O valor da venda do vendedor |%d| nesse mes foi: %d", vendedores[i].COD_VENDEDOR, vendas[j].VALOR); //Resultado da consulta.
                        existe_mes = true;
                    }
                }
            }
        }
    }
    //Caso não exista o usuário será notificado.
    if(existe_mes == false){
        printf("Nao existe venda desse vendedor nesse mes.\n");
    }

}


//Função para checar o valor total de vendas de um vendedor.
void ChecarTotalVendedor(){
    int tempCOD, iVendedor;
    double totalVendas=0;
    bool existe_vendedor=false;

    system("clear");

    //Registrando o codigo do vendedor para consultar.
    while(existe_vendedor != true){
        printf("Digite o codigo do vendedor para consulta: ");
        scanf("%d", &tempCOD);

        for(int i=0;i<num1;i++){
            //Checando para ver se o codigo é válido.
            if(tempCOD == vendedores[i].COD_VENDEDOR){
                existe_vendedor = true;
                iVendedor = i;
            }
        }
        if(existe_vendedor != true){
            printf("Codigo de vendedor nao existente. Tente novamente.\n"); //Notificação caso for inválido.
        }
    }

    //Calculando o total de vendas do vendedor.
    for(int i=0;i<num2;i++){
        if(vendedores[iVendedor].COD_VENDEDOR == vendas[i].COD_VENDEDOR){
            totalVendas += vendas[i].VALOR;
        }
    }

    printf("O valor total de vendas do vendedor|%d| e de: %d RS", vendedores[iVendedor].COD_VENDEDOR, totalVendas);
}


//Mostrar o codigo do vendedor que mais vendeu nesse mes
//(NAO FAZ SENTIDO POIS CADA VENDEDOR SÓ PODE VENDER UMA VEZ POR MÊS, por isso eu fiz a função achar qual o vendedor com venda de maior valor no mês.)
void MaiorVendaMes(){
    int tempMES,iVendedor;
    double maiorVENDA;
    bool existeVenda = false, primeiraVenda = true;

    system("clear");

    printf("Digite o mes para consulta: ");
    scanf("%d", &tempMES);

    for(int i=0;i<num2;i++){
        if(tempMES == vendas[i].MES){
            existeVenda = true;
            if(primeiraVenda == true){
                maiorVENDA = vendas[i].VALOR;
                iVendedor = i;
                primeiraVenda = false;
            }else{
                if(vendas[i].VALOR > maiorVENDA){
                    maiorVENDA = vendas[i].VALOR;
                    iVendedor = i;
                }
            }
        }
    }
    if(existeVenda != true){
        printf("Nao teve venda esse mes.");
    }else{
        printf("A maior venda esse mes foi do vendedor|%d| e teve o valor de: %d", vendas[iVendedor].COD_VENDEDOR, maiorVENDA);
    }

}


//Mostrar o mes com maior numero de vendas.
void MesMaisVendas(){
    int countMeses[12] = {0},maiorMes;
    bool primeiroMES = true;

    system("clear");

    //Contando quantas vendas tiveram em cada um dos 12 meses.
    for(int i=0;i<num2;i++){
        if(vendas[i].MES == 1){
            countMeses[0] += 1;
        }else if(vendas[i].MES == 2){
            countMeses[1] += 1;
        }else if(vendas[i].MES == 3){
            countMeses[2] += 1;
        }else if(vendas[i].MES == 4){
            countMeses[3] += 1;
        }else if(vendas[i].MES == 5){
            countMeses[4] += 1;
        }else if(vendas[i].MES == 6){
            countMeses[5] += 1;
        }else if(vendas[i].MES == 7){
            countMeses[6] += 1;
        }else if(vendas[i].MES == 8){
            countMeses[7] += 1;
        }else if(vendas[i].MES == 9){
            countMeses[8] += 1;
        }else if(vendas[i].MES == 10){
            countMeses[9] += 1;
        }else if(vendas[i].MES == 11){
            countMeses[10] += 1;
        }else if(vendas[i].MES == 12){
            countMeses[11] += 1;
        }
    }

    //Achando o mês com maior numero de vendas
    for(int i=0;i<12;i++){
        if(primeiroMES == true){
            primeiroMES = false;
            maiorMes = i;
        }
        if(countMeses[i] > countMeses[maiorMes]){
            maiorMes = i;
        }
    }

    if(maiorMes<1 && maiorMes>11){
        printf("Ainda nao houveram vendas.\n");//Avisar o usuário caso nenhum mês tenha tido vendas.
    }else{
        printf("O mes com o maior numero de vendas foi o mes: %d", maiorMes+1);//Mostrar o mês com maior vendas.
    }

}


//Função para criar um relatorio com todas as vendas criadas.
void SalvarRelatorio(){
    FILE *f;
    char c[50];

    f = fopen("Parte3_parte2.txt", "w");
    if(f == NULL){
        printf("Nao foi possivel abrir o arquivo de texto.\n");
        goto FimRelatorio;
    }

    if(num2 == 0){
        printf("Nao ha nada para salvar.");
        goto FimRelatorio;
    }

    fprintf(f,"Codigo, Mes, Valor:\n");
    for(int i=0;i<num2;i++){
        fprintf(f," %d | %d | %d \n", vendas[i].COD_VENDEDOR, vendas[i].MES, vendas[i].VALOR);
    }

    printf("Relatorio criado.");

    FimRelatorio:

    fclose(f);

}


//Função para mostrar o menu principal.
void Menu(){
    printf("\n\n");
    printf("O que voce deseja fazer?\n");
    printf("1- Cadastrar vendedor (max.4)\n");
    printf("2- Cadastrar venda. (max.3)\n");
    printf("3- Consultar as vendas de um funcionario em determinado mes.\n");
    printf("4- Consultar o total das vendas de determinado vendedor.\n");
    printf("5- Mostrar o numero do vendedor que mais vendeu em determinado mes.\n");
    printf("6- Mostrar o numero do mes com mais vendas.\n");
    printf("7- Finalizar programa.\n");
    printf("8- Salvar relatorio.\n: ");

}


int main(){
    int escolha;

    while(escolha != 7){
        Menu();
        scanf("%d", &escolha);

        if(escolha == 1){
            CadastroVendedor();
        }else if(escolha == 2){
            CadastroVendas();
        }else if(escolha == 3){
            ChecarVendasMes();
        }else if(escolha == 4){
            ChecarTotalVendedor();
        }else if(escolha == 5){
            MaiorVendaMes();
        }else if(escolha == 6){
            MesMaisVendas();
        }else if(escolha == 7){
            printf("Encerrando o programa agora.\n");
        }else if(escolha == 8){
            SalvarRelatorio();
        }

    }

return 0;
}
