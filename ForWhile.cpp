#include <iostream>
using namespace std;

int main(){
/*
	//Pesquisar um array solicitando do usuário o indice e retornar o valor
	//referenciado pelo indice
	int chave, a[] = {2, 20, 10, 11};	
	cout << "Insira o índice para pesquisar: " ;
	int b;
	b = 2;
	cin >> chave;
	int i;
	i = 0;
	while(i < 4){
		if(chave == i){
			cout << "Valor de a: " << a[i] << endl;
		}
		i += 1;		
	}
*/	
	//Pesquisar um array solicitando do usuário o valor e retornar o indice do valor
	//referenciado pelo valor
/*
	int chave, a[] = {2, 20, 10, 11};	
	cout << "Insira o índice para pesquisar: " ;
	int b;
	b = 2;
	cin >> chave;
	int i;
	i = 0;
	while(i < 4){
		if(chave == i){
			cout << "Valor de a: " << a[i] << endl;
		}
		i += 1;		
	}
*/
//Reproduzindo com for:
/*
	//Pesquisar um array solicitando do usuário o valor e retornar o indice do valor
	//referenciado pelo valor
	int chave, a[] = {2, 20, 10, 11};	
	cout << "Insira o valor para pesquisar: " ;
	int b;
	b = 2;
	cin >> chave;
	int i;
	i = 0;
	for(i;i < 4;i += 1){
		if(chave == i){
			cout << "Valor de a: " << a[i] << endl;
		}	
	}
	*/
	/*
	//Pesquisar um array solicitando do usuário o indice e retornar o valor
	//referenciado pelo indice
	int valor, a[] = {2, 20, 10, 11};	
	cout << "Insira o valor para pesquisar o índice correspondente: " ;
	int b;
	b = 2;
	cin >> valor;
	int i;
	i = 0;
	for(i;i < 4;i += 1){
		if(valor == a[i]){
			cout << "Valor de a: " << i << endl;
		}	
	}
	*/	
	int i, troca, valor, a[] = {2, 20, 10, 11};
	i = 0;
	for(i;i < 4;i += 1){
		valor = a[i+1];	
		cout << "Índice: " << i << ". Valor: "<< a[i] << endl;
	if(valor < a[i]){	a[i + 1] = valor;} else { valor = a[i - 1] ;}
	cout << "Indice a: " << i << ". Valor: " << a[i] << endl;
	}
} 
