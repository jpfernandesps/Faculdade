#include <iostream>

using namespace std;

float mediaNota (float nota1, float nota2, float nota3) {
	
	return (nota1 * 2 + nota2 * 3 + nota3 * 5) / (2 + 3 +5);
}

int main() {
	float nota1 = 0;
	float nota2 = 0;
	float nota3 = 0;
	
	cout << "CALCULADORA DE MEDIA" << endl << endl;
	
	cout << "Primeira nota: ";
	cin >> nota1;
	cout << "Segunda nota: ";
	cin >> nota2;
	cout << "Terceira nota: ";
	cin >> nota3;
	 
	cout << endl;
	cout << "Media das Notas = " << mediaNota(nota1, nota2, nota3);
	
	return 0;
}