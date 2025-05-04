#include <iostream>
#include <cmath>

using namespace std;

int formula(int x) {
	
	return pow(x, 2) + 2*x - 3;
}

int main() {
	int x = 0;
	
	cout << "Insira o valor de X: ";
	cin >> x;
	
	cout << endl;
	cout << "Resultado = " << formula(x);
	
	return 0;
}