#include <iostream>
#include <iomanip>//para usar a função setw

using namespace std;

int main(){
	int x, y;
	x = 1;
	while(x < 5){
		y = 1;
		while(y < 5){
			cout << setw(3) << x * y;
			y = y + 1;
		}
		x = x + 1;
		cout  << endl;
	}
/*
Resultado:
  1  2  3  4
  2  4  6  8
  3  6  9 12
  4  8 12 16
*/	

/*
	while(x < 5){
		y = 1;
		while(y < 5){
			cout << setw(3) << x * y;
			y = y + 1;
			
			cout  << endl;
		}
		x = x + 1;
		
	}
	

*/
/*
Resultado:
  1
  2
  3
  4
  2
  4
  6
  8
  3
  6
  9
 12
  4
  8
 12
 16
*/	
}
