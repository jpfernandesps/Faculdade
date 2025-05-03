#include <iostream>
#include <cmath>

using namespace std;

float formulaDistancia(float x1, float 	y1, float x2, float y2) {

	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); 
}

int main() {
	float x1 = 0;
	float x2 = 0;
	float y1 = 0;
	float y2 = 0;
	
	cout << "CALCULADORA DE DISTANCIA ENTRE PONTOS" << endl << endl;
	
	cout << "Digite o X1: ";
	cin >> x1;
	cout << "Digite o X2: ";
	cin >> x2;
	cout << "Digite o Y1: ";
	cin >> y1;
	cout << "Digite o Y2: ";
	cin >> y2;
	
	cout << endl;
	cout << "Resultado = " << formulaDistancia(x1, y1, x2, y2);
	
	return 0;
}