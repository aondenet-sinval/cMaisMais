#include <iostream>

using namespace std;
/*
#define TAMANHO 5

int array_max(int a[TAMANHO]){
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
	cout << "O maior eh " << array_max(valor) << endl;
}

*/
//DEMONSTRANDO QUE O ARRAY É PASSADO COMO VALOR REAL OU SEJA PODE ALTERAR O VALOR EM MEMÓRIA.
// Troca o valor de uma variavel
void troca( int a ){
	a = 20;
}
// Troca valores de elementos em um vetor
void troca_vet( int vet[] ){
	vet[0] = 60;
	vet[1] = 70;
	vet[2] = 80;
}
// Programa Principal
int main(){
int x, y;
int v[3];
	x = 10;
	v[0] = 30;
	v[1] = 40;
	v[2] = 50;
	troca( x );
	cout << "x=" << x << endl;//O valor de x não é modificado pela função chamada
	troca_vet( v );//O valor de v é modificado pela função chamada
	cout << "v[0]=" << v[0] << " v[1]=" << v[1] << " v[2]=" << v[2]<< "\n" ;
}  


