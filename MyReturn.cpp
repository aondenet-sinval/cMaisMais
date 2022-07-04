#include <iostream>

using namespace std;

void vValor(void){
	int valor;
	cout << "Informe um valor: ";
	cin >> valor;
	if( valor >= 0){
		cout << valor;
	}
	cout << "Valor: " << valor << endl;
	cout << -valor;

}


int main(){
	vValor();

}
