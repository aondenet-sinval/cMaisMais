#include <iostream>
#include <string>
using namespace std;
//Treinamento: Herança

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

class BiEletrica: public Bicicleta{
    private:
    int potencia;
    int tempo_carga;
    public:
    //Setter
    void setPotencia(int p){
        potencia = p;
    }
    int getPotencia(){
        return potencia;
    }
    //Setter
    void setTempoCarga(int t){
        tempo_carga = t;
    }
    int getTempoCarga(){
        return tempo_carga;
    }
};

int main(){
    int velocidade_escolhida;
    BiEletrica Feminina;
    Feminina.cor = "rosa";
    Feminina.modelo = "Monark";
    Feminina.setVelocidadeMax(60);
    Feminina.setTempoCarga(200);
    Feminina.setPotencia(1000);
    cout << "Cor: " << Feminina.cor << " modelo: " << Feminina.modelo << " velocidade máxima: " << Feminina.getVelocidadeMax() << endl;
    cout << "Potencia: " << Feminina.getPotencia() << " e tempo de carga: " << Feminina.getTempoCarga() << endl;
    return 0;
}
