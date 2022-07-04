#include <iostream>

using namespace std;

int main(){
	int x;
	x = 0;
	while(x < 5)
		x = x + 1;//Aqui não foi inserida chave embora seja uma boa prática fazer
		cout << "x recebe = " << x << endl;
	cout << "FIM" << endl;
}
