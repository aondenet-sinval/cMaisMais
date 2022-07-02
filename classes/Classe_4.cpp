#include <iostream>
#include <string>
using namespace std;
//Treinamento especificadores de acesso
//Encapsulamento

class Bicicleta{
    private:
    int velocidade_max;
    string genero;

    public:
    string cor;
    string modelo;
    string marca;

    //Setter
    void setVelocidadeMax(int v){
        velocidade_max = v;
    }
    //Getter
    int getVelocidadeMax(){
        return velocidade_max;
        }
};

int main(){
    int velocidade_escolhida;
    Bicicleta Feminina;
    Feminina.cor = "rosa";
    Feminina.modelo = "Monark";
    Feminina.setVelocidadeMax(60);
    velocidade_escolhida = Feminina.getVelocidadeMax();
    cout << "Cor: " << Feminina.cor << " modelo: " << Feminina.modelo << " velocidade máxima: " << Feminina.getVelocidadeMax() << endl;
    return 0;
}
