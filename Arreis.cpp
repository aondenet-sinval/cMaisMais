#include <iostream>

using namespace std;

int main(){
//Array numérico:
/*
int indice, nota[4];
float total;
	indice = 0;
	while (indice < 4){
		cout << "Entre com a nota do estudante " << indice << ": ";
		cin >> nota[indice];
		indice = indice + 1;
	}
	cout << "Notas:	";
	total = 0;
	indice = 0;
	while (indice < 4){
		cout << nota[indice] << " ";
		total = total + nota[indice];
		indice = indice + 1;
	} 
	cout << endl << "Média: " << total / 4 << endl;
	*/
//array com cadeia de caracteres:
/*
int codigo;
string nomes[4];
float total;
	 codigo = 0;
	 //instrução que recebe os valores do array
	while (codigo < 4){
		cout << "Entre com o nome do estudante " << codigo << ": ";
		cin >> nomes[codigo];
		codigo = codigo + 1;
	}
	cout << "Nomes:	\n";
	codigo = 0;
	//Instrução que imprime os valores do array
	while (codigo < 4){
		cout << nomes[codigo] << " \n";
		codigo = codigo + 1;
	}
*/
/*
//Para faciltar a manutenção do código podemos usar a constante simbólica:
#define NUMERO_DE_ALUNOS 4 
//para alterar a quantidade de alunos basta mexer acima.

int codigo;//Eu chamei o indice do array de código
string nomes[NUMERO_DE_ALUNOS];
float total;
	 codigo = 0;
	 //instrução que recebe os valores do array
	while (codigo < NUMERO_DE_ALUNOS){
		cout << "Entre com o nome do estudante " << codigo << ": ";
		cin >> nomes[codigo];
		codigo = codigo + 1;
	}
	cout << "Nomes:	\n";
	codigo = 0;
	//Instrução que imprime os valores do array
	while (codigo < NUMERO_DE_ALUNOS){
		cout << nomes[codigo] << " \n";
		codigo = codigo + 1;
	}
	codigo = 0;//redefinindo o valor de código pois antes possuia valor 4 conforme acima
	string pessoas[4] = {"Paulo", "Roberto", "João", "Maria"};
	cout << "Nomes inicializados: \n";
	//Imprimindo todos os valores do array
	while(codigo < 4){
		cout << pessoas[codigo] << " \n";
		codigo++;
	}
	*/
	int arr1[4] = {10, 20, 30, 40};
	int i = 0, arr2[4], soma[4], total = 0;
/*
	for(i; i < 4; i += 1){
		arr2[i] = arr1[i];
		soma[i] = arr1[i] + arr2[i];//definição de soma[4] = {20, 40, 60, 80}
		cout	<< "Posição: " << i << " igual a: " << arr2[i] << " soma: " << soma[i] << endl;
		total = total + soma[i]; 
	
	}
			
		Execuções do laço for na variável total:
		1:
		total = 0 + 20;
		total = 20;
		2:
		total = 20 + 40
		total = 60;
		3:
		total = 60 + 60;
		total = 120;
		4:	
		total = 120 + 80
		total = 200;
	*/
	//Repetindo com while:
	while(i < 4){
		arr2[i] = arr1[i];
		soma[i] = arr1[i] + arr2[i];//definição de soma[4] = {20, 40, 60, 80}
		cout	<< "Posição: " << i << " igual a: " << arr2[i] << " soma: " << soma[i] << endl;
		total = total + soma[i]; 
		i += 1;
	}
	cout << "Total dos valores do array: " << total << endl;
}
