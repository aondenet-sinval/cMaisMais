#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>
using namespace std;

int aIdade(int idade){
    try{

        if(idade > 60){
            cout << "Pode entrar" << endl;
        }else{
            throw (idade);
        }
    }
    catch(int idade){
       cout << "Acesso negado você tem menos de 60 anos.." << endl;
       cout << "Sua idade é: " << idade << endl;
    }
    return 0;
}

int calcularIdade(void){
    int idade;
    cout << "qual sua idade: " << endl;
    cin >> idade;
    aIdade(idade);
    return 0;
}

int main(){
    calcularIdade();
}
