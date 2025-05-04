#include <iostream>
#include <cmath>

using namespace std;

int formula(int x, int y) {
	
	return pow(x, 2) + pow(y, 2) - 6 * x * y - 1;
}

int main() {
	int x = 0;
	int y = 0;
	
	cout << "Insira o valor de X: ";
	cin >> x;
	cout << "Insira o valor de Y: ";
	cin >> y;
	
	cout << endl;
	cout << "Resultado = " << formula(x, y);
	
	return 0;
}