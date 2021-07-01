#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

//Variaveis Globais
int num=0,num2 = 0, num3 = 0; // 1 - Pacientes, 2 - Consultas, 3 - Medicos.
int countMedico = 0;

//Declaração de Structures.
struct PACIENTE{
    int COD_PACIENTE, TELEFONE;
    char NOME[60], ENDERECO[60];
}paciente[5];

struct MEDICO{
    int COD_MEDICO, TELEFONE;
    char NOME[60];
}medico[3];

struct CONSULTA{
    int NUM_CONSULTA, DIA_SEMANA, COD_MEDICO, COD_PACIENTE, HORA;
}consulta[30];


//Função  para cadastrar cliente e checagem de codigos iguais.
void CadastroPaciente(){
    int tam;
    system("clear");

    //Registrando o codigo de paciente
    LOOP_RegistroCodigoPaciente:
    printf("Digite o codigo do paciente:");
    scanf("%d", &paciente[num].COD_PACIENTE);

    for(int i=0;i<num;i++){
        //Checando se já existe esse codigo
        if(paciente[num].COD_PACIENTE == paciente[i].COD_PACIENTE){
            printf("Codigo ja existente. Tente Novamente.\n");
            goto LOOP_RegistroCodigoPaciente;
        }
    }

    //Registrando Informações simples.
   
    printf("Digite o nome do cliente: ");
    scanf("%59s", &paciente[num].NOME);

    printf("Digite o telefone do cliente: ");
    scanf("%d", &paciente[num].TELEFONE);

    printf("Digite o endereco do paciente: ");
    scanf("%59s", &paciente[num].ENDERECO);

    num++;
}


//Função para cadastrar medicos.
void CadastroMedico(){
    int tam;
    system("clear");

    //Registrando o codigo medico
    LOOP_RegistroCodigoMedico:
    printf("Digite o codigo do medico: ");
    scanf("%d", &medico[num3].COD_MEDICO);

    for(int i=0;i<num3;i++){
        //Checando se já existe esse codigo
        if(medico[num3].COD_MEDICO == medico[i].COD_MEDICO){
            printf("Codigo ja existente. Tente Novamente.\n");
            goto LOOP_RegistroCodigoMedico;
        }
    }

    //Registrando Informações simples.

    printf("Digite o nome do medico: ");
    scanf("%59s", &medico[num3].NOME);

    printf("Digite o telefone do medico: ");
    scanf("%d", &medico[num3].TELEFONE);

    num3++;
}


//Função para cadastrar consultas.
void CadastroConsulta(){
    bool existe_paciente = false;
    bool existe_medico = false;

    //Pegando o Codigo do paciente para criar a consulta.
    while(existe_paciente != true){
        system("clear");

        printf("Digite o codigo do paciente que ira fazer a consulta: ");
        scanf("%d", &consulta[num2].COD_PACIENTE);

        for(int i = 0; i<num;i++){
            //Checando se já existe esse codigo.
            if(consulta[num2].COD_PACIENTE == paciente[i].COD_PACIENTE){
                existe_paciente = true;
            }
        }
    }

    //Pegando o codigo do medico para criar a consulta.
    while(existe_medico != true){
        system("clear");

        printf("Digite o codigo do medico que ira fazer a consulta: ");
        scanf("%d", &consulta[num2].COD_MEDICO);

        for(int i = 0; i<num;i++){
            //Checando se já existe esse codigo.
            if(consulta[num2].COD_MEDICO == medico[i].COD_MEDICO){
                existe_medico = true;
            }
        }
    }

    if(countMedico>2){
        printf("Nao pode existir dois pacientes para o mesmo medico.\n");
    }

    LOOP_DiaDaSemanaInvalido:
    system("clear");
    printf("\nDigite o dia da consulta");
    printf("\n2 - Segunda");
    printf("\n3 - Terca");
    printf("\n4 - Quarta");
    printf("\n5 - Quinta");
    printf("\n6 - Sexta\n:");
    scanf("%d", &consulta[num2].DIA_SEMANA);

    if(consulta[num2].DIA_SEMANA<2 && consulta[num2].DIA_SEMANA>6){
        printf("Numero digitado invalido. Tente Novamente.\n");
        goto LOOP_DiaDaSemanaInvalido;
    }

    LOOP_HoraInvalida:
    system("clear");
    printf("Digite a hora da consulta(0-24): ");
    scanf("%d", &consulta[num2].HORA);
    if(consulta[num2].HORA<0 && consulta[num2].HORA>24){
        printf("Hora invalida. Tente Novamente.\n");
        goto LOOP_HoraInvalida;
    }

    system("clear");
    printf("Digite o numero da consulta: ");
    scanf("%d", consulta[num2].NUM_CONSULTA);

    printf("Consulta cadastrada.");
    num2++;
}


//Função para ler medico e dia da semana, e imprimir consultas. (TLDR:Ver se há medico nesse dia da semana)
void ConsultaMedico(){
    char MedicoLocal[60];
    int count=0,dia,tam;

    system("clear");

    printf("Digite o nome do medico: ");
    scanf("%59s", &MedicoLocal);

    system("clear");
    printf("\nDigite o dia da consulta");
    printf("\n2 - Segunda");
    printf("\n3 - Terca");
    printf("\n4 - Quarta");
    printf("\n5 - Quinta");
    printf("\n6 - Sexta\n:");
    scanf("%d", &dia);

    //30 É o número máximo de consultas possíveis.
    for(int i=0;i<30;i++){
        if((strcmp(MedicoLocal,medico[num3].NOME)==0) && (dia==consulta[num2].DIA_SEMANA)){
            count++;
        } 
    }

    system("clear");
    printf("O médico tem %d consultas no %d dia da semana", count,dia);
}


//Função para mostrar na tela todas as consultas do dia.
void ConsultaDia(){ 
    int Dia_Semana;

    system("clear");

    printf("\nDigite o dia da consulta");
    printf("\n2 - Segunda");
    printf("\n3 - Terca");
    printf("\n4 - Quarta");
    printf("\n5 - Quinta");
    printf("\n6 - Sexta\n:");
    scanf("%d", &Dia_Semana);

    for(int i=0;i<30;i++){
        if(Dia_Semana == consulta[i].DIA_SEMANA){
            printf("\nCodigo do Paciente: %d", consulta[i].COD_PACIENTE);
            printf("\nCodigo do Medico: %d", consulta[i].COD_MEDICO);
            printf("\nHorario: %d", consulta[i].HORA);

            if(consulta[i].DIA_SEMANA == 2){
                printf("A consulta sera Segunda.\n");
            }else if(consulta[i].DIA_SEMANA == 3){
                printf("A consulta sera Terca.\n");
            }else if(consulta[i].DIA_SEMANA == 4){
                printf("A consulta sera Quarta.\n");
            }else if(consulta[i].DIA_SEMANA == 5){
                printf("A consulta sera Quinta.\n");
            }else if(consulta[i].DIA_SEMANA == 6){
                printf("A consulta sera Sexta.\n");
            } 
        }
    }

}


//Função para criar um relatorio com todas as vendas criadas.
void SalvarRelatorio(){
    FILE *f;
    char c[50];

    system("clear");

    f = fopen("Parte3_parte1.txt", "w");
    if(f == NULL){
        printf("Nao foi possivel abrir o arquivo de texto.\n");
        goto FimRelatorio;
    }

    if(num2 == 0){
        printf("Nao ha nada para salvar.");
        goto FimRelatorio;
    }

    fprintf(f,"Codigo da Consulta, Dia Da Semana, Codigo do Medico, Codigo do Paciente, Hora:\n");
    for(int i=0;i<num2;i++){
        fprintf(f," %d | %d | %d | %d | %d \n", consulta[i].NUM_CONSULTA, consulta[i].DIA_SEMANA, consulta[i].COD_MEDICO, consulta[i].COD_PACIENTE, consulta[i].HORA);
    }

    printf("Relatorio criado.");

    FimRelatorio:

    fclose(f);

}

//Função do menu principal do programa.
void Menu(){

    printf("\n\n");
    printf("O que voce deseja fazer?\n");
    printf("1- Cadastrar novo paciente. (max.5)\n");
    printf("2- Cadastrar novo medico. (max.3)\n");
    printf("3- Criar consulta. (max.30)\n");
    printf("4- Ver as consultas agendadas de um medico em um dia da semana.\n");
    printf("5- Ver todas as consultas de um dia.\n");
    printf("6- Salvar Relatorio.\n");
    printf("7- Sair do programa.\n: ");

}


int main(){ 
    int escolha;

    while(escolha != 7){
        Menu();
        scanf("%d", &escolha);

        if(escolha == 1){
            CadastroPaciente();
        }else if(escolha == 2){
            CadastroMedico();
        }else if(escolha == 3){
            CadastroConsulta();
        }else if(escolha == 4){
            ConsultaMedico();
        }else if(escolha == 5){
            ConsultaDia();
        }else if(escolha == 6){
            SalvarRelatorio();
        }else if(escolha == 7){
            printf("Encerrando o programa agora.\n");    
        }
    }
return 0;
}



