#include <iostream>
#include <cmath>>

using namespace std;

float formula(float a, float b, float c) {
	float r = pow((a + b), 2);
	float s = pow((b + c), 2);
	
	return (r + s) / 2;
}

int main() {
	float a = 0;
	float b = 0;
	float c = 0;
	
	cout << "CALCULADORA" << endl << endl;
	
	cout << "Digite o valor de A: ";
	cin >> a;
	cout << "Digite o valor de B: ";
	cin >> b;
	cout << "Digite o valor de C: ";
	cin >> c;
	
	cout << endl;
	cout << "Resultado = " << formula(a, b, c);
	
	return 0;
}