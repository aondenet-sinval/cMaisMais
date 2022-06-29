#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>
using namespace std;
type
int Idade(int idade){
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

int calcular_idade(void){
    int idade;
    cout << "qual sua idade: " << endl;
    cin >> idade;
    Idade(idade);
}

int main(){
    calcular_idade();
}
