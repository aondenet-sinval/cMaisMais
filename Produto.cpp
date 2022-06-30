#include <iostream>
#include <iomanip>

using namespace std;

int main(){
cout.setf (ios::fixed | ios::showpoint);
	int Dividendo, Divisor, Resto;
	float Valor1, Valor2, Produto;
	string Texto1, Texto2, nome;
	Texto1 = "Digite o primeiro valor: ";
	Texto2 = "Digite o multiplicador: ";
	nome = "Digite seu nome: ";
	cout << Texto1 ;
	cin >> Valor1;
	cout << Texto2;
	cin >> Valor2;
	cout << nome;
	cin >> nome;
	cout.precision(2);
	Produto = Valor1 * Valor2;

			cout << nome << " o produto é: " << Produto;
	cout << "\nDigite um valor que deseja saber o resto da divisão.\n";
	cout << "Dividendo: \n";
	cin >> Dividendo;
	cout << "Divisor: \n";
	cin >> Divisor;
	Resto = Dividendo % Divisor;
	cout << "O resto é: "<< Resto << endl;
}
