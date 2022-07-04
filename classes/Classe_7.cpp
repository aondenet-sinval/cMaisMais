#include <iostream>
#include <string>
using namespace std;
//Aplicando conceito de herança com polimorfismo ou multiplas formas
class Passaro{
    public:
    void Som(){
        cout << "Canto do passaro..." << endl;
    }
};

class BemTeVi: public Passaro{
    public:
    void Som(){
        cout << "Te te vi..." << endl;
    }
};

class Coruja: public BemTeVi{
    public:
    void Som(){
        cout << "Grash grash..." << endl;
    }
};

int main(){
    Passaro MeuPassaro;
    BemTeVi TeVi;
    Coruja Croco;

    MeuPassaro.Som();//método
    TeVi.Som();//método
    Croco.Som();//método
    return 0;
    //polimorfismo significa: o mesmo método aplicado de forma diferente
}
