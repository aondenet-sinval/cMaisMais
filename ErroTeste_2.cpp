#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string.h>
using namespace std;

char Valor( char nome, char sobrenome){
    if(strlen(nome) < strlen(sobrenome)){
     throw 1;
    }
    nomes = nome + " " + sobrenome;
    return nomes;
}

int main() {
char nome[10], sobrenome[20];
    cout <<  "Entre com o nome: " << endl;
    cin >> nome;

    cout <<  "Entre com o sobrenome: " << endl;
    cin >> sobrenome;
    Valor(nome, sobrenome);
    if(nValue){
        cout << "Erro de nome." << endl;
    }

}
