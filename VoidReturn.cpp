#include <iostream>

using namespace std;

void Valor(void){
	int ch;
	cout << "Voce quer instruções? (s/n): ";
	ch = cin.get();
	/* Termina se resposta for n */
	if (ch == 'n' || ch == 'N')//Acento agudo 'n' ou 'N'
		return;
	/* Mostra instruções */
	cout << "As regras do jogo sao . . . \n";
	cout << "Informe seu nome. \n";
	string nome;
	cin >> nome;
	cout << "Seu nome é: " << nome << endl;
	//return;//Em funções void o return é opcional para finalizar a função.
	
}

int abs(int x){
	if (x < 0)
	x = -x;
	return x;
}

int main(){
int a, b, x;
		cout << "Informe um valor: \n 1 - Valor \n 2 - Abs \n";
		cin >> b;
		if(b == 1){
		Valor();
		}
		else if(b == 2){
		cout << "Informe um valor: ";
		cin >> x;
		a = abs(x);
		cout << "Valor absoluto: " << a << endl;
		}
}

