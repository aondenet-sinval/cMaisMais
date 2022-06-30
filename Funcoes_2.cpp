#include <iostream>

using namespace std;
//Usando parametros default
void myFunction(string country = "Prado") {
  cout << country << "\n";
}

int main() {
  myFunction("Alcobaça");
  myFunction("Teixeira de Freitas");
  myFunction();//Aqui não passamos argumento, estaremos usando o parametro default: 
  myFunction("Itamaraju");
  return 0;
}

