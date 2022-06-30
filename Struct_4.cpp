#include <iostream>
using namespace std;
/*
Objetivo:
Treinar o uso de aninhamento de estruturas com array.
Algoritmo:
Criar uma estrutura que represente detalhes do carro.
Pedir os dados ao usuário:
1 - Quantidade a ser cadastrada.
2 - detalhes a ser cadastrado.
Apresentar na tela os carros registrados que foram inseridos in memory.
Problema apresentado na execução desse programa:
1 - Aguns eram saltados durante a execução.
Exemplo:
Após digitar a QTDE e apertar enter  acontece um pulo e o próximo dado solicitado é a marca e não a cor.
Conforme alguns programadores comentam no stackoverflow usei cin.ignore comentado abaixo.
O salto se deve a quebra de linha \n.
Mas o programa não prosseguia dependendo do uso (ao usar cin.ignore() passando alguns parametros).
Mantive por isso somente em algumas partes do programa.
Mas alterei a estrutura evitando misturar cin com cin.getline().
Achei que o resultado foi satisfatório
2 - Estava declarando na função cadastrarCarro a seguinte instrução:
oCarro[indice].DetalhesPlaca.placa[6]
oCarro[indice].DetalhesAno.ano[4]
Isso fazia os valores retornarem em main com o endereço alocado na memória e não com o valor da variável.
Embora o valor da variável estivesse na função cadastrarCarro.
Então refiz esse trecho do código.
*/
#define LENCHAR 15
struct Carro{
    char cor[LENCHAR];
    char marca[LENCHAR];
    int placa;
    int ano;
}Carro;

struct CarroEletrico{
    char TempoCarga[LENCHAR];
    struct Carro DetalhesCor;
    struct Carro DetalhesMarca;
    struct Carro DetalhesPlaca;
    struct Carro DetalhesAno;
}CarroEletrico;


void cadastrarCarro(struct CarroEletrico oCarro[], int indice){
int erro;
    cout << "Insira o tempo de carga da bateria: " << endl;
    cin.getline(oCarro[indice].TempoCarga, LENCHAR);
    cout << "Insira a cor do carro" << endl;
    cin.getline(oCarro[indice].DetalhesCor.cor, LENCHAR);
    cout << "Insira a marca do carro" << endl;
    cin.getline(oCarro[indice].DetalhesMarca.marca, LENCHAR);
    cout << "Insira o número da placa" << endl;
    cin >> oCarro[indice].DetalhesPlaca.placa;
    cout << "Insira o ano de fabricação" << endl;
    cin >> oCarro[indice].DetalhesAno.ano;
    if(!(oCarro[indice].DetalhesPlaca.placa) || !(oCarro[indice].DetalhesAno.ano)){
        throw (erro);
    }
    cin.ignore();

}


void imprimirCarro(struct CarroEletrico novoCarro){
cout << "Cor " << novoCarro.DetalhesCor.cor << " marca " << novoCarro.DetalhesMarca.marca << " placa " << novoCarro.DetalhesPlaca.placa << " ano " << novoCarro.DetalhesAno.ano << " e tempo de carga da bateria " << novoCarro.TempoCarga << "."<< endl;
}


int main(){
int QTDE;
        //Deixando o usuário do programa escolher a quanidade de carros a ser cadastrada.
        cout << "Digite a quantidade de carros para cadastro: " << endl;
        cin >> QTDE;
        cin.ignore();
        struct CarroEletrico novosCarros[QTDE];//inicialização
        int i;
        try{
            //Registro de novos carros inicando com o índice 0
            for(i = 0; i < QTDE; i++){
                cout << "Efetue o cadastro do carro " << i << ":\n";
                cadastrarCarro(novosCarros, i);
            }
        }catch(int erro){
            cout << "Preencha os dados placa e ano corretamente." << endl;
            return 0;//Em caso de erro a execução termina.
        }
            //Impressão de todos itens do
            for(i = 0; i < QTDE; i++){
                cout << "Detalhe do carro cadastrado " << i << ":\n";
                imprimirCarro(novosCarros[i]);
            }
}
