#include <iostream>
using namespace std;
int main( ){
float num1, num2;
char op;
	// obtem uma expressao do usuario
	cout << "Entre com: número operador(:/+-*xX) número\n";
	cin >> num1 >> op >> num2;
	//Exemplo 1:
/*
	switch (op){
		case '+':
			cout << " = " << num1 + num2;
			break;
		case '-':
			cout << " = " << num1 - num2;
			break;
		case '*':
			cout << "= " << num1 * num2;
			break;
		case '/':
			cout << " = " << num1 / num2; 
			break;
		default:
			cout << " Operador invalido.";
			break;
	}
*/
	//Exemplo 2:
	switch (op){
		case '+':
			cout << " = " << num1 + num2;
			break;
		case '-':
			cout << " = " << num1 - num2;
			break;
		case '*':
		case 'x':
		case 'X':				
			cout << "= " << num1 * num2;
			break;
		case '/':
		case ':':		
			cout << " = " << num1 / num2; 
			break;
		default:
			cout << " Operador invalido.";
			break;
	}
	cout << endl;
}




