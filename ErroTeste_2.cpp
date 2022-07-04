#include <iostream>
#include <cstring>
using namespace std;
//Teste de comprimento de cadeia de caracteres
int iNome(void){
char nome[10], sobrenome[20], nomes[30];
    cout <<  "Entre com o nome: " << endl;
    cin.getline(nome, 10);

    cout <<  "Entre com o sobrenome: " << endl;
    cin.getline(sobrenome, 20);
string nome_err;
    if((strlen(nome)) > (strlen(sobrenome))){
     throw nome_err;
    }
    cout << "Seu nome é: "<< nome << " " << sobrenome << endl;
    return 0;
}

int main() {
    try{
         iNome();
    }
    catch(string nome_err){
        cout << "Erro: você não digitou um nome válido. \nSeu nome é menor que seu sobrenome?" << endl;
    }


}
