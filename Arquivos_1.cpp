#include <iostream>
#include <fstream>

using namespace std;
//Acessando arquivos
int main(){
char ver[20];
    ifstream leitura;
    cout << "Qual arquivo" << endl;
    cin.getline(ver, 20);
    leitura.open(ver, ios::in);
    cout << ver;
    return 0;
}
