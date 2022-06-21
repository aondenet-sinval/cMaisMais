#include <iostream>
//Usando operadores especiais de pré e pós-incremento: diferenças.
using namespace std;

int main(){
	int a = 0, b = 0, c = 0, d = 0, e = 1, f = 1;
		cout << "Pré-incremento com a: "<< a << endl;
		cout << "Pré-incremento com a: "<< ++a << endl;//Incremento aqui. A variável a é impressa depois do incremento.
		cout << "Pré-incremento com a: "<< a << endl;
		//	
		cout << "Pós-incremento com b: "<< b << endl;
		cout << "Pós-incremento com b: "<< b++ << endl;//Note que a variável b está sendo chamada(impressa) antes do incremento
		cout << "Pós-incremento com b: "<< b << endl;//... então o incremento acontece aqui.
		
		//Declaração não garantida
		cout << "Pré-incremento sem garantia: "<< ++c << c * 3 <<  endl;
		//A intenção acima é que o valor seja incrementado e depois multiplicado ( 1 x 3 = 3) 
		//Mas o resultado é multiplicação e depois concatenado. resultado: 13
		//Com garantia
		++d;
		cout << "Pré-incremento com garantia: "<< d * 3 << endl;
		//A intenção acima é que o valor seja incrementado e depois multiplicado ( 1 x 3 = 3)
		//Aqui o resultado é garantido.
		// 
		//Declaração não garantida
		cout << "Pós-incremento sem garantia: "<< e++ << e * 3 <<  endl;
		//A intenção acima é que o valor seja incrementado e depois multiplicado ( 1 x 3 = 3) 
		//Mas o resultado é multiplicação e depois concatenado. resultado: 13
		//Com garantia
		f++;
		cout << "Pós-incremento com garantia: "<< f * 3 << endl;
		//A intenção acima é que o valor seja incrementado e depois multiplicado ( 1 x 3 = 3)
		//Aqui o resultado é garantido.  		 		
}