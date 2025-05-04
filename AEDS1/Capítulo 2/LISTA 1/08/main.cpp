#include <iostream>

using namespace std;

float produto(float a, float b, float c) {
	
	return a * b * c;
}
int main() {
	float a = 0;
	float b = 0;
	float c = 0;
	
	cout << "Insira o valor de A: ";
	cin >> a;
	cout << "Insira o valor de B: ";
	cin >> b;
	cout << "Insira o valor de C: ";
	cin >> c;
	
	cout << endl;
	cout << "Resultado = " << produto(a, b, c);
	
	return 0;
}