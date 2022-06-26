#include <iostream>
using namespace std;
/*
Objetivo:
Treinar o uso de aninhamento de estruturas com array.
Algoritmo:
Criar uma estrutura que represente detalhes do carro.
Pedir os dados ao usuário:
1 - Quantidade a ser cadastrada.
2 - detalhes a ser cadastrado.
Apresentar na tela os carros registrados que foram inseridos in memory.
Problema apresentado na execução desse programa:
Aguns dados tem sido saltados durante a execução
Exemplo:
Após digitar a QTDE e apertar enter  acontece um pulo e o próximo dado solicitado é a marca e não a cor.
*/
#define LENCHAR 15

struct Carro{
    char cor[LENCHAR];
    char marca[LENCHAR];
    int placa[6];
    int ano[4];
}Carro;

struct CarroEletrico{
    char TempoCarga[LENCHAR];
    struct Carro DetalhesCor;
    struct Carro DetalhesMarca;
    struct Carro DetalhesPlaca;
    struct Carro DetalhesAno;
}CarroEletrico;

struct CarroEletrico ModeloFuturo;

void cadastrarCarro(struct CarroEletrico oCarro[], int indice){
    cout << "Insira a cor do carro" << endl;
    cin.getline(oCarro[indice].DetalhesCor.cor, LENCHAR);
    cout << "Insira a marca do carro" << endl;
    cin.getline(oCarro[indice].DetalhesMarca.marca, LENCHAR);
    cout << "Insira o número da placa" << endl;
    cin >> oCarro[indice].DetalhesPlaca.placa[6];
    while(oCarro[indice].DetalhesPlaca.placa[6] == false){//teste para ver se foi deixado em branco.
        cin >> oCarro[indice].DetalhesPlaca.placa[6];
    };
    cout << "Insira o ano de fabricação" << endl;
    cin >> oCarro[indice].DetalhesAno.ano[4];
    cout << "Insira o tempo de carga da bateria: " << endl;
    cin.getline(oCarro[indice].TempoCarga, LENCHAR);
}

void imprimirCarro(struct CarroEletrico novoCarro){
cout << "Cor " << novoCarro.DetalhesCor.cor << " marca " << novoCarro.DetalhesMarca.marca << " placa " << novoCarro.DetalhesPlaca.placa << " ano " << novoCarro.DetalhesAno.ano << " e tempo de carga da bateria" << novoCarro.TempoCarga << endl;
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
		cadastrarCarro(novosCarros, i);
    }
    //Impressão de todos itens do array
    for(i = 0; i < QTDE; i++){
		cout << "Detalhe do carro cadastrado " << i << ":\n";
		imprimirCarro(novosCarros[i]);
    }
}
