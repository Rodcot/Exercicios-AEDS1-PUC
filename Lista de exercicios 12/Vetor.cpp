#include <iostream>
#include <vector>
#include <algorithm>
#include "Vetor.h"
using namespace std;


Vetor::Vetor() {
    v = new int [TAMANHO];
    for(int i=0;i<TAMANHO;i++){
        v[i] = 0;
    } 
};

int Vetor::obtemTamanho() { return numElementos-1; };

void Vetor::insereNoFinal(int novoElemento) {
    v[numElementos] = novoElemento;
    numElementos++;
};

int Vetor::posicaoDe (int elemento) {
    int flag = 0;
    for(int i=0;i<numElementos-1;i++){
        if(v[i] == elemento){
            return i;
            flag = 1;
        }
    }
    if(flag != 1){
        return -1;
    }
};

int Vetor::alteraEm (int pos, int novoValor) {
    if(pos < 0 && pos > 9){
        return -1;
    }else{
        v[pos] = novoValor;
    }
    
};

int Vetor::elementoDe (int pos) { return 0; };

int Vetor::elementoEm (int pos) {
    if(pos < 0 && pos > 9){
        return -1;
    }else{
        return v[pos];
    }
};

void Vetor::reverte() { 
    int temp;
    int n = numElementos-1;
    double x = n/2;
    for(int i=0; i<x+1; i++){
        temp = v[n-i];
        v[n-i] = v[i];
        v[i] = temp;
    }
};

void Vetor::imprime() {
    for(int i=0;i<=numElementos-1;i++){
        cout <<"[" <<i <<"]: " <<v[i] <<", ";
    }
    cout <<endl;

};

int Vetor::aumentarTamanho(){
    aumento++;
    v = new int [TAMANHO * aumento];
    for(int i=(TAMANHO*(aumento-1));i<(TAMANHO*aumento);i++){
        v[i] = 0;
    } 
};

void Vetor::eliminarElemento(int elemento){
    int x = numElementos - 1;

    int found = 0;
    for(int i=0; i<x; i++){
        if(v[i]==elemento){
            for(int j=i; j<(x-1); j++)
                v[j] = v[j+1];
            found=1;
            i--;
            x--;
        }
    }
    if(found==0){
        cout<<"\nElemento nao existe.";
    }else{
        cout<<"Novo vetor:\n";
        for(int i=0; i<x; i++)
            cout <<"[" <<i <<"]: " <<v[i] <<", ";
    }
}




int main(int argc, char *argv[]){

    Vetor *v = new Vetor();

    v->insereNoFinal(10);
    v->insereNoFinal(8);
    v->insereNoFinal(16);
    v->insereNoFinal(7);
    v->insereNoFinal(5);
    v->insereNoFinal(13);

    v->imprime();

    v->alteraEm(3,19);
    v->alteraEm(15,9);

    for(int i=0; i<=v->obtemTamanho(); i++){
        cout << "Elemento na posicao[" <<i <<"]: " <<v->elementoEm(i) <<endl;
    }

    v->reverte();
    v->imprime();

    //Parte 2:
    cout << "\nParte 2: " <<endl;

    cout << "\nAumento do vetor: "<<endl;

    v->insereNoFinal(1);
    v->insereNoFinal(2);
    v->insereNoFinal(3);
    v->insereNoFinal(2);
    v->insereNoFinal(4);
    v->insereNoFinal(2);

    v->imprime();

    cout << "\nEliminacao do elemento(2): "<<endl;

    v->eliminarElemento(2);

    return 0;
}