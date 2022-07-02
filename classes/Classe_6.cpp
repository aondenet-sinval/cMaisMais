#include <iostream>
#include <string>
using namespace std;
//Treinamento: Encapsulamento e Herança múltipla (ou multinivel)

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

class BicicletaSolar: public BiEletrica{
    private:
    int hora_autonomia;
    public:
    //método setter:
    void setAutonomia(int aut){
        hora_autonomia = aut;
    }
    //método getter:
    int getAutonomia(){
        return hora_autonomia;
    }
};

int main(){
    BicicletaSolar Moderna;//A última na herança da classe herda todos os membros das classes super.
    Moderna.cor = "rosa";
    Moderna.modelo = "Monark";
    Moderna.setVelocidadeMax(60);
    Moderna.cor = "Azul";
    Moderna.setTempoCarga(200);
    Moderna.setPotencia(1000);
    Moderna.setAutonomia(24);
    cout << "Cor: " << Moderna.cor << " modelo: " << Moderna.modelo << " velocidade máxima: " << Moderna.getVelocidadeMax() << "Km/h." << endl;
    cout << "Potencia: " << Moderna.getPotencia() << ", tempo de carga: " << Moderna.getTempoCarga() << "." << endl;
    cout << "Autonomia: " << Moderna.getAutonomia() << endl;
    return 0;
}

