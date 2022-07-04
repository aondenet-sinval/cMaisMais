#include <iostream>

using namespace std;

int main(){

	int arr1[4] = {10, 20, 30, 40};
	int i = 0, arr2[4], soma[4], total = 0;

	//Repetindo com while:
	while(i < 4){
		arr2[i] = arr1[i];
		soma[i] = arr1[i] + arr2[i];//definição de soma[4] = {20, 40, 60, 80}
		cout	<< "Posição: " << i << " igual a: " << arr2[i] << " soma: " << soma[i] << endl;
		total = total + soma[i];
		i += 1;
	}
	cout << "Total dos valores do array: " << total << endl;
}
