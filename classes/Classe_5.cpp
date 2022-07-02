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
    //Setter
    void setGenero(string g){
        genero = g;
    }
    //Getter
    string getGenero(){
        return genero;
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
    BiEletrica Moderna;
    Moderna.cor = "rosa";
    Moderna.modelo = "Monark";
    Moderna.setVelocidadeMax(60);
    Moderna.setTempoCarga(200);
    Moderna.setPotencia(1000);
    Moderna.setGenero("feminino");
    cout << "Cor: " << Moderna.cor << " modelo: " << Moderna.modelo << " velocidade máxima: " << Moderna.getVelocidadeMax() << "Km/h." << endl;
    cout << "Potencia: " << Moderna.getPotencia() << ", tempo de carga: " << Moderna.getTempoCarga() << " e genero: " << Moderna.getGenero() << "." << endl;
    return 0;
}
