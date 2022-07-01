#include <iostream>
#include <fstream>

using namespace std;
//Processando arquivos: leitura
int processar_leitura(void){
char ver[20], ler;
    ifstream leitura;
    cout << "Qual arquivo" << endl;
    cin.getline(ver, 20);
    leitura.open(ver, ios::in);//abrindo
    while((ler = leitura.get()) != EOF){//lendo
    cout << ler;//imprimindo na tela
    }
    leitura.close();
    return 0;
}

int main(){
    ifstream leitura;
    leitura.open("leitura.txt", ios::in);//abrindo
    if(leitura.fail()){
        cout << "Arquivo não encontrado" << endl;
    }else{
        processar_leitura();
    }
}

