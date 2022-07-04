#include <iostream>
using namespace std;

int main(){
string animal = "rato";

	cout << "Numero de caracteres de " << animal << ": " << animal.length() << endl;
	cout << "Numero de caracteres de " << animal << ": " << animal.size() << endl;

	//trocando caracter;
	animal[3] = 'a';
	cout << "Agora o animal é: " << animal << endl;
    animal[0] = 'p';
	cout << "Agora o animal é: " << animal << endl;
}
