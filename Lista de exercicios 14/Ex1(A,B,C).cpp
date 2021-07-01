#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

// Criação das classes.

class Ingresso{
    private:

    public:
        Ingresso();
        void imprimeValor();
        int valor = 100;
};

class IngressoVIP : public Ingresso {
    private:

    public:
        IngressoVIP();
        int aumento = 75;
        int valorVIP = valor + aumento;
        void imprimeValorVIP();
};

class IngressoNormal : public Ingresso {
    private:

    public:
        IngressoNormal();
        void imprimeValorNormal();
};

class CamaroteNormal : public IngressoNormal{
    private:

    public:
        CamaroteNormal();
        string localizacao = "Camarote Inferior";
        void imprimeLocalizacao();
};

class CamaroteVIP : public IngressoVIP{
    private:

    public:
        CamaroteVIP();
        string localizacaoVIP;
        void imprimeLocalizacaoVIP(int opcao);
};


// Definindo o contéudo das classes.
Ingresso::Ingresso(){
    cout <<"*** Construtor de Ingresso *** \n";
};
IngressoVIP::IngressoVIP() : Ingresso(){
    cout <<"*** Construtor de Ingresso VIP *** \n";
};
IngressoNormal::IngressoNormal() : Ingresso(){
    cout <<"\n *** Construtor de Ingresso Normal *** \n";
};
void Ingresso::imprimeValor(){
    cout <<"[" <<valor <<"] " <<endl;
};
void IngressoNormal::imprimeValorNormal(){
    cout <<"[" <<valor <<"] " <<endl;
};
void IngressoVIP::imprimeValorVIP(){
    cout <<"[" <<valorVIP <<"] " <<endl;
};
CamaroteNormal::CamaroteNormal(){

};
CamaroteVIP::CamaroteVIP(){

};
void CamaroteNormal::imprimeLocalizacao(){
    cout <<"|" <<localizacao <<"| " <<endl;
};
void CamaroteVIP::imprimeLocalizacaoVIP(int opcao){
    if(opcao == 1){
        localizacaoVIP = "Camarote Superior";
    }else if(opcao == 2){
        localizacaoVIP = "Camarote Inferior";
    }else{
        cout <<"Houve um problema no registro da localizacao.";
        std::exit(EXIT_SUCCESS);
    }

    cout <<"Localizacao : |" <<localizacaoVIP <<"| " <<endl;
};

// MAIN

int main(){
    
    Ingresso *e;
    int opcao,opcao2;

    cout <<"Digite o tipo do seu ingresso(1-Normal/2-VIP): "; //Recebendo o Tipo de Ingresso
    cin >> opcao;

    //Checando o tipo de Ingresso
    if(opcao == 1){
        CamaroteNormal *c = new CamaroteNormal(); //Criando lugar no camarote Normal
        cout<<"Ingresso: Normal / Localizacao: ";
        c->imprimeLocalizacao();

    }else if(opcao == 2){
        CamaroteVIP *c = new CamaroteVIP(); //Criando camarote VIP
        cout<<"Ingresso: VIP\n";
        cout <<"Digite sua localizacao(Camarotes: 1-Superior / 2- Inferior): ";
        cin >> opcao2;
        c->imprimeLocalizacaoVIP(opcao2); //Decidindo se o camarote VIP sera Superior ou Inferior
    }else{
        cout <<"Tipo de ingresso invalido."<<endl;
        std::exit(EXIT_SUCCESS);
    }

return 0;
}