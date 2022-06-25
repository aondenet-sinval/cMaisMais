#include <iostream>
using namespace std;

int main(){
string animal1 = "rato";

	cout << "Numero de caracteres de " << animal1 << ": " << animal1.length() << endl;
	cout << "Numero de caracteres de " << animal1 << ": " << animal1.size() << endl;

	//trocando caracter;
	animal1[3] = 'a';
	cout << "Agora o animal é: " << animal1 << endl;
    animal1[0] = 'p';
	cout << "Agora o animal é: " << animal1 << endl;
}
