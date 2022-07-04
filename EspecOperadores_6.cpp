#include <iostream>
#include <cmath>
using namespace std;
 const float a = 200;//variável global

float somaUm(float b){
//variaveis locais: c e resultado
    cout << "Valor do parametro soma_1(): " << b << endl;
    float resultado;
    float d = 10.5;
    resultado = b + d;
    cout << "Em soma 1 sou: "<< resultado << endl;
    return resultado;
}

float somaDois(float c){
//variaveis locais: d e resultado
    cout << "Valor do parametro soma_2(): " << c << endl;
    float resultado;
    float d = 9.5;
    resultado = c + d;
    cout << "Em soma 2 sou: "<< resultado << endl;
    return resultado;
}

float somaTres(float c){
//variaveis locais: d e resultado
    cout << "Valor do parametro soma_3(): " << c << endl;
    float resultado;
    float d = 9.5;
    resultado = c + d;
    cout << "Em soma 3 sou: "<< resultado << endl;
    return resultado;
}

int main(){
//variaveis locais: f e g;
float f, g;
    cout << "Defina um valor para soma: " << endl;
    cin >> f;
    g = somaUm(somaDois(somaTres(f)));//Sequencia de execução/controle: soma_3(), soma_2(), soma_1()
    cout << "A soma total é: " << g + a << endl;
}
