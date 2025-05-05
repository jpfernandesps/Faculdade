#include <iostream>

using namespace std;

void trocaNumero(int a, int b) {
	int aux = 0;
	
	if (a < b) {
		aux = a;
		a = b;
		b = aux;
		
		cout << "A = " << a << endl << "B = " << b;
	} 
	else {
		cout << endl << "NAO E NECESSARIO TROCAR OS VALORES";
	} 
}
 
int main() {
	int a = 0;
	int b = 0;
	
	cout << "Insira o valor de A: ";
	cin >> a;
	cout << "Insira o valor de B: ";
	cin >> b;	
	
	trocaNumero(a, b);
	
	return 0;
}