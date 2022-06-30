#include <iostream>
//Função recursiva:
//È uma função que chama ela mesma para resolver um problema dividindo.
using namespace std;
int soma(int k) {
  if (k > 0) {
    //cout << k << " +" << endl;//Descomente aqui para ver o retorno 5 + 4 + 3 + 2 + 1
    return k + soma(k - 1);//Chama novamente a função argumento k = 9 e assim sucessivamente. While via if???
  } else {
    return 0;
  }
}

int main() {
  int result = soma(5);//15
  cout << result;
  return 0;
}
