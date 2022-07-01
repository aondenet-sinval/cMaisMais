#include <iostream>
#include <fstream>

using namespace std;
//Processando arquivos: escrita
int criar_arquivo(void){
char texto[20];
    // Criar e abrir arquivo
    ofstream MeuArq("leitura_2.txt");

    cout << "Escreva algo no arquivo leitura_2.txt." << endl;
    cin.getline(texto, 20);
    // Escrever no arquivo
    MeuArq << texto;

    // Fechar arquivo
    MeuArq.close();
    return 0;
}

int processar_leitura(void){
char nome_arquivo[20], ler, errou;
    //Podemos ler conforme abaixo opção 1 (interativa)

    ifstream leitura;
    cout << "Qual arquivo" << endl;
    cin.getline(nome_arquivo, 20);
    leitura.open(nome_arquivo, ios::in);//abrindo
    if(leitura.fail()){
        throw errou;
    }

    while((ler = leitura.get()) != EOF){//lendo
    cout << ler;//imprimindo na tela
    }

    //Ou lemos conforme abaixo opção 2
    /*
    string oTexto;
    ifstream leitura("leitura.txt");
    if(leitura.fail()){
        throw errou;
    }
    while(getline(leitura, oTexto)){
        cout << oTexto;
    }
    */
    leitura.close();
    return 0;
}

int main(){
int op;
    cout << "Seecione a opção: \n1 - Criar arquivo \n2- Ler." << endl;
    cin >> op;
    cin.ignore();
    switch(op){
    case 1:
        criar_arquivo();
        break;
    case 2:
        try{
        processar_leitura();
        }catch(char errou){
            cout << "Arquivo não encontrado" << endl;
        }
        break;
        }
    return 0;
}

