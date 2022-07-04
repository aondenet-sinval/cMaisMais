#include <iostream>
using namespace std;
//Para faciltar a manutenção do código podemos usar a constante simbólica:
#define NUMERO_DE_ALUNOS 4
//para alterar a quantidade de alunos basta mexer acima.
int main(){
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
}
