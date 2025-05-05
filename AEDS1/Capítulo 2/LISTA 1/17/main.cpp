#include <iostream>

using namespace std;

void valorPositivo(float numero) {
	if (numero == 0) {
		cout << endl << "Zero";
	} 
	else if (numero > 0) {
		cout << endl << "Positivo";
	} 
	else {
		cout << endl << "Negativo";
	}
}

int main() {
	float numero = 0;
	
	cout << "Insira um valor: ";
	cin >> numero;
	
	valorPositivo(numero);
	
	return 0;
}