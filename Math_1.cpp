#include <iostream>
#include <cmath>
using namespace std;
//Math
int main()
{
//Usando funções da biblbioteca interna cmath
    int a = 10, b =15, d = 4;
    double quad;
    cout << "Retornando o maior valor: " << max(a, b) << endl;
    cout << "Retornando o menor valor: " << min(a, b) << endl;
    cout << "Insira o valor para ver a raiz quadrada: " << endl;
    cin >> quad;
    cout << "A raiz quadrada de " << quad << " é: " << sqrt(quad) << endl;
    cout << "Valor round: " << round(quad);
   // return 0;
}
