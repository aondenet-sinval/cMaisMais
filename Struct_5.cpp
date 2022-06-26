#include <iostream>
using namespace std;
/*
Nota: esse programa é uma derivação do programa anterior Struct_3
Objetivo:
Demonstrar o uso de aninhamento de estruturas.
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

struct CarroEletrico{
    struct Carro Detalhes;
    char TempoCarga;
}CarroEletrico;
struct CarroEletrico FuturoModelo;

void obtemCarro(struct CarroEletrico [], int);

void imprimeCarro(struct CarroEletrico);

void obtemCarro(struct CarroEletrico FuturoModelo[], int indice){
    cout << "Insira a cor do carro" << endl;
    cin.getline(FuturoModelo[indice].cor, LENCHAR);
    cout << "Insira a marca do carro" << endl;
    cin.getline(FuturoModelo[indice].marca, LENCHAR);
    cout << "Insira o número da placa" << endl;
    cin >> FuturoModelo[indice].placa;
    cout << "Insira o número da placa" << endl;
    cin >> FuturoModelo[indice].TempoCarga;
    while(FuturoModelo[indice].placa == false){//teste para ver se foi deixado em branco.
        cin >> FuturoModelo[indice].placa;
    };
    cout << "Insira o ano de fabricação" << endl;
    cin >> FuturoModelo[indice].ano;
}
void imprimeCarro(struct CarroEletrico novoCarro){
cout << "Cor " << novoCarro.cor << " marca " << novoCarro.marca << " placa " << novoCarro.placa << " ano " << novoCarro.ano <<  " ano " << TempoCarga <<endl;
}

int main(){
int QTDE;
cout << "Quantos carros você deseja cadastrar agora? " << endl;
cin >> QTDE;
struct CarroEletrico novosCarros[QTDE];//inicialização
int i;
    //Registro de novos carros inicando com o índice 0
    for(i = 0; i < QTDE; i++){
		cout << "Efetue o cadastro do carro " << i << ":\n";
		obtemCarro(novosCarros, i);
    }
    //Impressão de todos itens do array
    for(i = 0; i < QTDE; i++){
		cout << "Detalhe do carro cadastrado " << i << ":\n";
		imprimeCarro(novosCarros[i]);
    }
}
