#include <iostream>
using namespace std;
//BubleSort Otimizado
#define TAM 9
void imprimePassos (int v[], int tam, int passo){
int i;
	cout << "Passo " << passo << ": --> ";
	for(i = 0; i < tam; i += 1){
	cout << v[i] << " ";
	}
cout << endl;
}
/* Uma funcao que troca os valores entre dois elementos de um array */
void troca_v( int vet[], int i, int j){
int aux;
	aux = vet[i];
	vet[i] = vet[j];
	vet[j] = aux;
}
/* 
Uma funcao que ordena um array de inteiros usando o algoritmo de
Bubble sort.
Entrada: array a ser ordenado -- lista[]
tamanho do array -- tam
*/
void bubbleSort(int lista[], int tam){
int ordenado = 0, /* enquanto o array nao estiver ordenado, fazer uma passagem sobre ele */
	/* se 1 depois da passagem o array esta’ ordenado */
	elem_final = 1, /* em uma passagem, elementos do ultimo ate’ elem_final
					sao comparados com o elemento anterior */
	i,j,
	temp;
	while (ordenado == 0){
		ordenado = 1; /* assume que array esta’ ordenado */
		/* Examina o array do ultimo elemento ate elem_final. Compara
		cada elemento com o anterior e troca seus valores se estiver
		fora de ordem. */
		imprimePassos(lista, tam, elem_final - 1);
		for(i = tam - 1; i >= elem_final; i -= 1){
			if (lista[i] < lista[i - 1]){ /* troca os elementos de i e i-1 */
				troca_v (lista, i, i - 1);
				ordenado = 0;
				/* marca como nao ordenado */
			}
		}
	elem_final = elem_final + 1;
	}
}
int main (){
int vetor[TAM], i;
	for(i=0; i < TAM; i += 1){
		cin >> vetor[i];
	}
	bubbleSort(vetor, TAM);
}
