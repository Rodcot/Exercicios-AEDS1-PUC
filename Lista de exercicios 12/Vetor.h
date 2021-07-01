#include <vector>
class Vetor{
    private:
        int *v; //Armazenar elementos.
        int numElementos = 0; //Informações sobre o número de elementos inseridos
        int aumento = 1;

    public:
        const static int TAMANHO = 10;
        Vetor();
        int obtemTamanho();
        void insereNoFinal(int novoElemento);
        int posicaoDe (int elemento);
        int alteraEm (int pos, int novoValor);
        int elementoDe (int pos);
        int elementoEm (int pos);
        void reverte();
        void imprime();
        int aumentarTamanho();
        void eliminarElemento(int elemento);
};