#include <iostream>
using namespace std;
//Usando estruturas como argumentos de função
//Algoritmo: Criar uma estrutura que represente detalhes do carro.
//Pedir os dados ao usuário e apresentar na tela os dados que foram inseridos.
#define lenchar 15
struct Carro{
    char cor[lenchar];
    char marca[lenchar];
    int placa;
    int ano;
}Carro;

struct Carro obtemCarro(void){
struct Carro novoCarro;
    cout << "Insira a cor do carro" << endl;
    cin.getline(novoCarro.cor, lenchar);
    cout << "Insira a marca do carro" << endl;
    cin.getline(novoCarro.marca, lenchar);
    cout << "Insira o número da placa" << endl;
    cin >> novoCarro.placa;
    while(novoCarro.placa == false){//teste para ver se foi deixado em branco.
        cin >> novoCarro.placa;
    };
    cout << "Insira o ano de fabricação" << endl;
    cin >> novoCarro.ano;
    return novoCarro;
}
void imprimeCarro(struct Carro novoCarro){
cout << "Cor " << novoCarro.cor << " marca " << novoCarro.marca << " placa " << novoCarro.placa << " ano " << novoCarro.ano << endl;
}

int main(){
struct Carro novoCarro;//inicialização
novoCarro = obtemCarro();
cout << "\nOs detalhes de seu carro são: " << endl;
imprimeCarro(novoCarro);
}
