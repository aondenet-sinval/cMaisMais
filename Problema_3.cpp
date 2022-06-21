#include <iostream>
using namespace std;
#define TAM 9
void imprimePassos (int v[], int tam, int passo){
int i;
	cout << "Passo " << passo << ": --> ";
	for(i = 0; i < tam; i += 1){
		cout << v[i] << " ";
	}
	cout << endl;
}
/* 
Uma funcao que encontra o menor valor em um
"a" e "b" (inclusive)
*/
int menor_indice(int v[], int a, int b){
int i;
int menor;
	menor = a;
	for (i = a + 1; i <= b; i += 1){
		if ( v[i] < v[menor] ){
			menor = i;
			}
		}
	return menor;
	}
/* Uma funcao que troca os valores entre dois elementos de um array */
void troca_v( int vet[], int i, int j){
int aux;
	aux = vet[i];
	vet[i] = vet[j];
	vet[j] = aux;
}
/* Uma funcao que ordena um array de inteiros usando o algoritmo de
Select sort.
Entrada: array a ser ordenado -- lista[]
tamanho do array -- tam
*/
void selectSort(int lista[], int tam){
int i, j, idx_menor_elem;
/* indice do menor valor no array entre i e tam-1 */
	for(i = 0; i < tam; i += 1){
		imprimePassos( lista, tam, i );
		idx_menor_elem = menor_indice( lista, i, tam - 1 );
		troca_v( lista, i, idx_menor_elem );
		}
	}
int main (){
int i, vetor[TAM];
	for(i = 0; i < TAM; i += 1){
		//Solicitando os valores do array:
		cin >> vetor[i];
		}
	selectSort(vetor, TAM);
}

/*
Passos:
A função main solicita dos usuários todos os valores que serão passados ao array.
Após isso a função selectSort é chamada passando o array e o tamanho.
Agora vamos ver o que acontece na função selectSort:
Recebe o array e o tamanho.
Primeira execução do laço em selectSort:
1 - é chamada a função imprimePassos(array,tanho do array, primeiro elemento do array) ou argumentos: array, 9, 0.
A função imprimePassos imprime o item do array passado no indice[0].
1 - é chamada a função menor_indice(array, 0, 8)..
*/

