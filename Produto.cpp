#include <iostream>
#include <iomanip>

using namespace std;

int main(){
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
	Produto = Valor1 * Valor2;

			cout << nome << setw(5) << " o produto é: " << Produto;
			cout.precision(5);
	cout << "\nDigite um valor que deseja saber o resto da divisão.\n";
	cout << "Dividendo: \n";
	cin >> Dividendo;
	cout << "Divisor: \n";
	cin >> Divisor;
	Resto = Dividendo % Divisor;
	cout << "O resto é: "<< Resto << endl;
}
