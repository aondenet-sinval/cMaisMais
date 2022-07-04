#include <iostream>
using namespace std;
#define ALTURA 7
#define LARGURA 7
void selecionaElem(char [][LARGURA], int);
void pontos(char [][LARGURA], int);
void imprimeMatriz(char [][LARGURA], int);
void marcaTriang(char [][LARGURA], int);
void flip(char [][LARGURA], int);
void esperaEntrada(void);
// *** DEFINICAO DE FUNCOES *******
// funcao que imprime um array 2-D nlin X LARGURA
void imprimeMatriz(char matriz[][LARGURA], int nlin){
int x, y;
	for(y = 0; y < nlin; y += 1){
		for(x = 0; x < LARGURA; x += 1)
			cout << matriz[y][x] << " ";
	cout << endl << endl;
	}
	cout << endl;
}
	// funcao que preenche uma matriz nlin X LARGURA com pontos
void pontos( char matriz[][LARGURA], int nlin){
	int x, y;
	for(y = 0; y < nlin; y += 1)
		for(x = 0; x < LARGURA; x += 1)
			matriz[y][x] = '.';
}
/* funcao que preenche os elementos selecionados da matriz com um
* quadrado e imprime a matriz
*/
void selecionaElem(char matriz[][LARGURA], int nlin){
int x, y;
	cout << "\nEntre com as coordenadas na forma \"y x\"." << endl;
	cout << "Use numeros negativos para terminar." << endl;
	cout << "Coordenadas: ";
	cin >> y >> x;
	while (x >= 0 && y >= 0){
		matriz[y][x] = '@';
		// preenche o elemento com quadrado
		imprimeMatriz(matriz, nlin);
		// imprime a matriz
		cout << "Coordenadas: ";
		cin >> y >> x;
	}
}
/* funcao que marca todos os elementos abaixo da diagonal principal de
* um array nlin X LARGURA com quadrados
*/
void marcaTriang(char matriz[][LARGURA], int nlin){
int x, y;
	cout << "Triangulo" << endl;
	pontos(matriz, nlin);
	for (y = 0; y < nlin; y += 1)
		for (x = 0; x <= y; x += 1)
			matriz[y][x] = '@';
}
// funcao que rotaciona (’flip’) cada linha array tendo
// diagonal principal como centro da rotação
void flip(char matriz[][LARGURA], int nlin){
int x, y;
int temp;
	cout << "Flip ao longo da diagonal principal." << endl;
	for (y = 0; y < nlin; y += 1)
		for (x = 0; x <= y; x += 1){
			temp = matriz[y][x];
			matriz[y][x] = matriz[x][y];
			matriz[x][y] = temp;
		}
}
// funcao que espera ate que uma tecla qualquer seja digitada
void pausar(){
char c;
	cin.get(c);
}
// ********* MAIN ***********
// alguns exemplos de chamadas de funcoes com argumentos array 2-D
int main(){
char matriz [ALTURA] [LARGURA];
	pontos(matriz, ALTURA);
	selecionaElem(matriz, ALTURA);
	pausar();
	flip(matriz, ALTURA);
	imprimeMatriz(matriz,ALTURA);
	pausar();
	marcaTriang( matriz, ALTURA);
	imprimeMatriz( matriz, ALTURA);
	pausar();
	flip( matriz, ALTURA);
	imprimeMatriz(matriz, ALTURA);
	pausar();
}
