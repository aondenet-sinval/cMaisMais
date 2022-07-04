#include <iostream>

using namespace std;

int iSoma(int a, int b){
	cout << "Informe os números para somar: " << endl;
	cin >> a >> b;
	int c;
	c = a + b;
	return c;

}
int iSubtracao(int a, int b){
	cout << "Informe os números para Subtrair: " << endl;
	cin >> a >> b;
	int c;
	c = a - b;
	return c;
}

int iVoid(void){
	int quadrado;
	cout << "Insira o valor para o quadrado: " << endl;
	cin >> quadrado;
	return quadrado * quadrado;
}

int main(){
	int f, g;
	int tipo;
	cout << "Informe o tipo de operação: \n 1-Soma. \n 2-Subtração. \n 3-Quadrado. \n";
	cin >> tipo;

	if (tipo == 1){
		f = iSoma(f,g);
		cout << "O resultado dos dois numeros é: " << f << endl;
	}
		else if(tipo == 2){
			f = iSubtracao(f,g);
			cout << "O resultado dos dois numeros é: " << f << endl;
		}
			else if(tipo == 3){
				f = iVoid();
				cout << "O resultado dos dois numeros é: " << f << endl;
			}

}
