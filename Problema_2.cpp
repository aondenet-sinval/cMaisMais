#include <iostream>

using namespace std;
/*
Escrever uma função que some dois arrays de floats, do mesmo tamanho. Dar o resultado em um terceiro
array. O tamanho dos arrays é também passado para a função.
*/
void soma_array( float arr1[], float arr2[], float arr3[], int tam ){
int i;
//Resolvendo o problema com for:
/*
	for(i = 0; i < tam; i += 1){
		arr3[i] = arr1[i] + arr2[i];
		cout << "Conteúdos da soma de arrays: " << arr3[i] << endl;
	}
*/
//Resolvendo o problema com while:
	i = 0;
	while(i < tam){
		arr3[i] = arr1[i] + arr2[i];
		cout << "Conteúdos da soma de arrays: " << arr3[i] << endl;
		i += 1;
	}
}

int main(){
	int tam;
	tam = 4;
	float arr1[] = {1, 2, 3, 4};
	float arr2[] = {5, 6, 7, 8};
	float arr3[4];
	soma_array(arr1, arr2, arr3, tam);
}