#include <iostream>
using namespace std;
//Usando enum

enum diasDaSemana {seg = 1, ter, qua, qui, sex, sab, dom};
enum horaAgenda {manha, tarde};
enum tpSemana {SEG, TER, QUA, QUI, SEX, SAB, DOM};
enum tpSemana diaDaSemana( int dia, int mes, int ano );
int main(){
int diaPgto, mesPgto, anoPgto;
int diaSem;
    cout << "Entre com a data de pagamento (dd mm aa): ";
    cin >> diaPgto >> mesPgto >> anoPgto;
    diaSem = diaDaSemana( diaPgto, mesPgto, anoPgto );
    if( diaSem == SAB )
        diaPgto = diaPgto + 2;
            else if( diaSem == DOM )
                diaPgto++;
    cout << "Data do pagamento: " << diaPgto << "/" << mesPgto << "/" << anoPgto << endl;
/*
enum diasDaSemana dia1, dia2, dia3, dia4, dia5, dia6, dia7;
    dia1 = seg;
    dia7 = dom;
    cout << "Primeiro dia: " << dia1 << endl;
    cout << "Ultimo dia: " << dia7 << endl;
*/
}
