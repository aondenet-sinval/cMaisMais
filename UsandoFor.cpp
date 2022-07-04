#include <iostream>
#include <iomanip>

using namespace std;

int main(){
int a = 0;
	//Usando while
	while(a < 10){
		cout << "valor de a: " << a << endl;
		a++;
	}

	/*
	//A mesma instrução usando for
	for(a;a < 10;a++){
		cout << "Valor de a: " << a << endl;
	}

	/*
	//Usando vários inicializadores e incrementos
	int contador, total;
	for( contador = 0, total = 0; contador < 10; contador += 1 ){
		total += contador;
		cout << "contador = " << contador << ", total = " << total << endl;
	}
	//Imprimindo todos os numeros entre 30 e 5 e relizando a soma:
	int i, soma;
	soma = 0;
	for( i = 30; i >= 5; i -= 1 ){
		if( (i % 3) == 0 ){
			cout << "\t" << setw(2) << i << endl;
			soma += i;
		}
	}
	cout << "\t soma = " << soma << endl;
	*/
}

