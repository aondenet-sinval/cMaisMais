#include <iostream>
#include <cstring>//necessário para usar funções de strings como strlen()...
using namespace std;

int main(){
char nome1[10], nome2[20];
int tamanhoNome, comparacao, dia, diaIdade;
    cout << "Escreva seu primeiro nome: " << endl;
    cin.getline(nome1, 10);
    cout << "Escreva seu primeiro nome: " << endl;
    cin.getline(nome2, 20);
    cout << "Nome: " << nome1 << ". Sobrenome: " << nome2 << "." << endl;
    //Manipulando arrays de strings (string é array)
    nome1[0] = 'S'; nome2[0] = 'G'; nome2[10] = 'S';//(S)sinval - (G)gomes dos (S)santos.
    cout << "Nome: " << nome1 << ". Sobrenome: " << nome2 << "." << endl;
    //Verificando os tamanhos de string:
    tamanhoNome = strlen(nome1);
    cout << "O comprimento de seu nome é " << tamanhoNome << endl;
    //Comparando strings:
    comparacao = strcmp(nome1, nome2);
    if(comparacao == 0)
        cout << "As strings são iguais." << endl;
        else if(comparacao < 0)
            cout << "A primeira string é menor." << endl;
                else if(comparacao > 0)
                    cout << "A primeira string é maior." << endl;
    //Usando atribuição de string
    strcpy(nome1, nome2);//Trocando a string do nome pela string do sobrenome
    cout << "Seu sobrenome é: " << nome1 << endl;//Gomes dos Santos
}
