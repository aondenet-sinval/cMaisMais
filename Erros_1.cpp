#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>
using namespace std;

void cleanInput(){
char cc;
    if (cin.fail()){
        cin.clear();
        while (cin.get(cc) && cc != '\n');
    }
}
void printStatInput(){
    cout << "\tGood: " << cin.good()
    << " Fail: " << cin.fail()
    << " Bad: " << cin.bad()
    << " EOF: " << cin.eof() << endl << endl;
}
int main (){
int b = 1111, c = 2222, d = 3333;
float x = 1.111, y = 2.222;
void * cinerr;
cout << "b c d = " << b << " " << c << " " << d << endl;
cout << "x y = " << x << " " << y << endl;
    while( !(cinerr = cin >> b)){
    cleanInput();
    cout << "cin 1 = " << cinerr << " b = " << b << endl;
    printStatInput();
    cout << "Entrada 1: ";
    }
cout << "** cin 1 = " << cinerr << " b = " << b << endl;
    while (! (cinerr = cin >> b >> c >> d)){
    cleanInput();
    cout << "cin 2 = " << cinerr << " b c d = " << b << " " << c << " " << d << e
    printStatInput();
    cout << "Entrada 2: ";
    }
cout << "** cin 2 = " << cinerr << " b c d = " << b << " " << c << " " << d <<
    cinerr = cin >> x;
cout << "cin 3 = " << cinerr << " x = " << x << endl;
    printStatInput();
    if (!cinerr){
    /* Limpar condição de erro em cin, se houver.
    */
    cout << "Limpando condições de erro de CIN" << endl;
    cin.clear();
    printStatInput();
    }
cout << "Ultima entrada: ";
    cinerr = cin >> x >> y;
cout << "cin 4 = " << cinerr << " x y = " << x << " " << y << endl;
    printStatInput();
return 0;
}
