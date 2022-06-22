#include <iostream>
//Exemplo de uso operadores especiais
//Tipos diferentes a precedencia será o tipo mais complexo independente da ordem dos operadores.
//Regra: char < int < long < float < double
using namespace std;

int linha(){
	int linha = 0; 
	while(linha < 10){
		cout << " - ";
		linha++;	
	}
	cout << endl;
	return linha;
}


int main() {
//Exemplo 1 int double
unsigned int a = 20, b = 10; double c, d = 1.9;
	c =  d + a;
	cout << "Primeiro resultado double + int: " << c << endl;//21.9
	linha();
	cout << endl;
	c = 12 + 2.7;
	cout << "Segundo resultado int + double: " << c << endl;//14.7
	linha();
	cout << "Terceiro resultado - variável int definida: "<< b + d << endl;//10(int) + 1.9(double)= 11.9(double);
	linha();
	//Podemos alterar a precedencia mudando o valor (sem mudar o tipo) usando o cast de tipos:
	cout << "Terceiro resultado - tipo com cast: "<<  a + (int) d << endl;//cast: 20(int) + 1.9(double)= 21(int) e não 21.9;	
}