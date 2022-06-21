#include <iostream>

using namespace std;

int main(){
int a, b;
	cout << "Informe um mesmo valor para a e b: \n";
	cin >> a >> b;
	a = a + a;
	cout << "Os valores passados são atribuidos: " << a;
	b += b;
	cout << "\n Os valores passados são atribuidos: " << b << endl;
}

