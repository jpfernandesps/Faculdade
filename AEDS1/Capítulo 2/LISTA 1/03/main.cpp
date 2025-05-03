#include <iostream>

using namespace std;

int soma(int num1, int num2) {
	return num1 + num2;
}

int main() {
	int num1 = 0;
	int num2 = 0;
	
	cout << "Insira o Primeiro Numero: ";
	cin >> num1;
	cout << "Insira o Segundo numero: ";
	cin >> num2;
	
	cout << endl;
	cout << "Resultado = " << soma(num1, num2);
	
	return 0;
}