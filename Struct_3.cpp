#include <iostream>
using namespace std;
/*
Nota: esse programa é uma replicação do programa anterior Struct_2
Objetivo:
Demonstrar uso de arrays estruturas.
Algoritmo:
Criar uma estrutura que represente detalhes do carro.
Pedir os dados ao usuário para que registre 2 carros.
Apresentar na tela os carros registrados que foram inseridos in memory.
*/
#define LENCHAR 15

struct Carro{
    char cor[LENCHAR];
    char marca[LENCHAR];
    int placa;
    int ano;
}Carro;
void obtemCarro(struct Carro [], int);
void imprimeCarro(struct Carro);

void obtemCarro(struct Carro oCarro[], int indice){
    cout << "Insira a cor do carro" << endl;
    cin.getline(oCarro[indice].cor, LENCHAR);
    cout << "Insira a marca do carro" << endl;
    cin.getline(oCarro[indice].marca, LENCHAR);
    cout << "Insira o número da placa" << endl;
    cin >> oCarro[indice].placa;
    while(oCarro[indice].placa == false){//teste para ver se foi deixado em branco.
        cin >> oCarro[indice].placa;
    };
    cout << "Insira o ano de fabricação" << endl;
    cin >> oCarro[indice].ano;
}
void imprimeCarro(struct Carro novoCarro){
cout << "Cor " << novoCarro.cor << " marca " << novoCarro.marca << " placa " << novoCarro.placa << " ano " << novoCarro.ano << endl;
}

int main(){
int QTDE;
cout << "Quantos carros você deseja cadastrar agora? " << endl;
cin >> QTDE;
struct Carro novosCarros[QTDE];//inicialização
int i;
    for(i = 0; i < QTDE; i++){
		cout << "Efetue o cadastro do carro " << i << ":\n";
		obtemCarro(novosCarros, i);
    }
    for(i = 0; i < QTDE; i++){
		cout << "Detalhe do carro cadastrado " << i << ":\n";
		imprimeCarro(novosCarros[i]);
    }
}
