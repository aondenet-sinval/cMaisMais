#include <iostream>
#include <string>
using namespace std;
// Criando classe Carro com alguns atributos
class Carro{
public:
        string marca;
        string modelo;
        int ano;
        void seguir(){ cout << "Você escolheu seguir em frente..." << endl; }
        void esquerda(){ cout << "Você escolheu girar a esquerda..." << endl; }
        void direita();//método que será criado fora da classe
};
//definindo método fora da definição de classe
void Carro::direita(){ cout << "Você escolheu girar a direita..." << endl; };

int main(){
int op;
    Carro ObjUm;
    ObjUm.marca = "Fiat";
    ObjUm.modelo = "Strada";
    ObjUm.ano = 2022;

    cout << "Marca: " << ObjUm.marca << ". Modelo: " << ObjUm.modelo << ". Ano: " << ObjUm.ano << "Grirar: " << endl;
    cout << "Deseja seguir(aperte 1), esquerda(2) ou direita(3) " << endl;
    cin >> op;
    cin.ignore();
    switch(op){
        case 1:
            ObjUm.seguir();
            break;
        case 2:
            ObjUm.esquerda();
            break;
        case 3:
            ObjUm.direita();
            break;
    }
    return 0;
}
