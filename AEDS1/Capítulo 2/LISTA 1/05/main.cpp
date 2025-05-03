#include <iostream>

using namespace std;

int main() {
	int a = 0;
	int b = 0;
	int aux = 0;
	
	cout << "Insira o valor de A: ";
	cin >> a;
	cout << "Insira o valor de B: ";
	cin >> b;
	
	aux = a;
	a = b;
	b = aux;
	
	cout << endl;
	cout << "A = " << a << " B = " << b;
	
	return 0;
}