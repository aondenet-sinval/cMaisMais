#include <iostream>
using namespace std;

struct Carro{
    string cor;
    string marca;
    int placa;
    int ano;
}Carro;

int main(){
struct Carro meuCarro = {"azul", "bmw", 1234, 2022}, meuSegundoCarro;//inicialização
    cout << meuCarro.cor << endl;//impressão do membro cor
    meuSegundoCarro = meuCarro ;//Usando atribuição todos os membros são herdados !array
    cout << meuSegundoCarro.marca << endl;//impressão do membro marca
}
