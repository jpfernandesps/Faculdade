#include <iostream>

using namespace std;

float media (float nota1, float nota2, float nota3) {
	
	return (nota1 + nota2 + nota3) / 3;
}

int main() {
	float nota1 = 0;
	float nota2 = 0;
	float nota3 = 0;
	
	cout << "Insira a Primeira Nota: ";
	cin >> nota1;
	cout << "Insira a Segunda Nota: ";
	cin >> nota2;
	cout << "Insira a Terceira Nota: ";
	cin >> nota3;
	
	cout << endl;
	cout << "MEDIA DAS NOTAS = " << media(nota1, nota2, nota3);
	
	return 0;
}