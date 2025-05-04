#include <iostream>

using namespace std;

int soma(int a, int b, int c) {
	
	return a + b + c;
}

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	
	cout << "Insira o valor de A: ";
	cin >> a;
	cout << "Insira o valor de B: ";
	cin >> b;
	cout << "Insira o valor de C: ";
	cin >> c;
	
	cout << endl;
	cout << "Resultado = " << soma(a, b, c);
 	
	return 0;
}