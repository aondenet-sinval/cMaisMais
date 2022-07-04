#include <iostream>

using namespace std;

#define TAMANHO 5

int arrayMax(int a[TAMANHO]){
	int i, max;
	// Achar o maior valor do array
	max = a[0];
	i = 1;
	while (i < TAMANHO) {
		if (max < a[i]){
			max = a[i];
			}
			i = i + 1;
		}
	return max;
}
// Programa principal
int main(){
	int i, valor[TAMANHO];
	i = 0;
	//inicializando array
	while (i < TAMANHO) {
		cout << "Entre um inteiro: ";
		cin >> valor[i];
		i = i + 1;
	}
	cout << "O maior é: " << arrayMax(valor) << endl;
}
