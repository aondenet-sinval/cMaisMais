#include <iostream>

using namespace std;

void Valor(void){
	int valor;
	cout << "Informe um valor: ";
	cin >> valor;
	if( valor >= 0){
		return valor;
	}
	cout << "Valor: " << valor << endl;
	return -valor;
	
}


int main(){ 
	Valor();	
	
}
