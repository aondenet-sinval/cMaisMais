#include <iostream>
//Exemplo de uso operadores especiais
using namespace std;
int main() {
int n1, n2, n3, n4;
	cout << "Entre com um numero inteiro: ";
	cin >> n1;//se n1 recebe 5
	n1 += n1 * 10;//ordem de operação: multiplicação(5 * 10) + soma/atribuição (5)= 55.
	n2 = n1 / 5;//n2 = 11.
	n3 = n2 % 5 * 7;//o resto da divisão de 11/5 = 1 e 1 * 7 = 7. n3 = 7.
	n2 *= n3-- % 4;
	cout << n2 << " " << n3 << "  " << (n2 != n3 + 21) << endl;
} 