#include <iostream>
using namespace std;
#define ALTURA 5
#define LARGURA 5
int main(){
int x;//numero da coluna
int y;//numero da linha
char matriz [ALTURA] [LARGURA];//array 2-D [num_lins, num_cols]
	//preenche a matriz com zeros
	for(y = 0; y < ALTURA; y += 1){
		for(x = 0; x < LARGURA; x += 1){
		matriz[y][x] = 0;
		}
	}
	//Imprime a matriz com zeros e a coordenada escolhida com 1
	cout << endl << "Entre coordenadas na forma \"y x\"." << endl;
	cout << "Use valores negativos para sair do programa." << endl;
	cout << "Coordenadas: ";
	cin >> y >> x;
	while (x >= 0 && y >= 0){
		matriz[y][x] = 1;
		//coloca 1 no elemento escolhido
		for(y = 0; y < ALTURA; y += 1){
		// imprime o array todo
			for(x = 0; x < LARGURA; x += 1){
				cout << matriz[y][x] << " ";
			}
		cout << endl << endl;
		}
	cout << endl;
	cout << "Coordenadas: ";
	cin >> y >> x;
	}
}