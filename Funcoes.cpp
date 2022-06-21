#include <iostream>

using namespace std;

int Soma(int a, int b){
	cout << "Informe os números para somar: " << endl;
	cin >> a >> b;
	int c;
	c = a + b;
	return c;
	
}
int Subtracao(int a, int b){
	cout << "Informe os números para Subtrair: " << endl;
	cin >> a >> b;
	int c;
	c = a - b;
	return c;
}

int UmaVoid(void){
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
		f = Soma(f,g);
		cout << "O resultado dos dois numeros é: " << f << endl;
	}
		else if(tipo == 2){
			f = Subtracao(f,g);
			cout << "O resultado dos dois numeros é: " << f << endl;
		}
			else if(tipo == 3){
				f = UmaVoid();
				cout << "O resultado dos dois numeros é: " << f << endl;
			}		
	
}
