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
        int aceleracao(int velocidade);
        Carro(string a, string b, int c);//Declaração para construtor fora da classe

};
//definindo método fora da definição de classe
void Carro::direita(){ cout << "Você escolheu girar a direita..." << endl; };
int Carro::aceleracao(int velocidade){
    return velocidade;
}
    //Definindo o construtor fora da classe
    Carro::Carro(string a, string b, int c){
        marca = a;
        modelo = b;
        ano = c;
    };

int main(){
int op, veloz, c;
string a, b;
    cout << "Digite as definições do carro na ordem: marca - modelo - ano. " << endl;
    cin >> a >> b >> c;
    Carro ObjUm(a, b, c);//usando o construtor

    cout << "Marca: " << ObjUm.marca << ". Modelo: " << ObjUm.modelo << ". Ano: " << ObjUm.ano << endl;
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
    cout << "Digite a velocidade preferida..." << endl;
    cin >> veloz;
    veloz = ObjUm.aceleracao(veloz);
    cout << "Velocidade: " << veloz << " Km/Hora." << endl;
    return 0;
}

