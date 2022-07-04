#include <iostream>

using namespace std;
#define TAMANHO 4

/*
Escreva uma função pesquisa linear que tem como argumento de entrada: um array de inteiros a
ser pesquisado, o tamanho do array, e uma chave (um valor inteiro) a ser procurado. A função retorna um
inteiro: o índice do elemento do array (se a chave for achada) ou -1 caso contrário.

*/
//Solução com while:
/*
int pesquisa_linear(int arr[], int tam, int chave){
int i;
	while(i < tam){
		if (chave == i){
		return arr[i];
		}
		cout << "\n i agora é: " << i;
		i += 1;
	}
	return -1;
}
*/
//Solução com for:
int pesquisaLinear(int arr[], int tam, int chave){
int i;
	for(i = tam - tam;i < tam;i +=1){
		if (chave == i){
		return arr[i];
		}
	}
	return -1;
}
int main(){
int indice, chave;
	int arr[TAMANHO] = {2, 4, 6, 8};
	cout << "Digite uma chave: \n";
	cin >> chave;
	indice = pesquisaLinear(arr, TAMANHO, chave);
	cout << "Array posição " << chave << " : " << indice << endl;
}
