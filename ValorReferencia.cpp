#include <iostream>

using namespace std;
//Usar referência &

void inverter(int & a, int & b){
	int mudar;
	mudar = b;
	b = a;
	a = mudar;	
}

int main(){
int a, b;
	cout << "Informe um valor para a e b: \n";
	cin >> a >> b;
	cout << "Os valores passados são: " << a << " e " << b;
	inverter(a, b);
	cout << ". Os valores invertidos são: " << a << " e " << b << endl;
}

