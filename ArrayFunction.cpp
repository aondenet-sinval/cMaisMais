#include <iostream>

using namespace std;
//DEMONSTRANDO QUE O ARRAY É PASSADO COMO VALOR REAL OU SEJA PODE ALTERAR O VALOR EM MEMÓRIA.
// Troca o valor de uma variavel
void troca( int a ){
	a = 20;
}
// Troca valores de elementos em um vetor
void trocaVetor( int vet[] ){
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
	trocaVetor( v );//O valor de v é modificado pela função chamada
	cout << "v[0]=" << v[0] << " v[1]=" << v[1] << " v[2]=" << v[2]<< "\n" ;
}


