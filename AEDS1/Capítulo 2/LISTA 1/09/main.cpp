#include <iostream>

using namespace std;

int triplo(int a) {
	
	return a * 3;
}

int quadruplo (int b) {
	
	return b * 4;
}

int main() {
	int a = 0;
	int b = 0;
	
	cout << "Insira o valor que sera multiplicado por 3: ";
	cin >> a;
	cout << "Insira o valor que sera multiplicado por 4: ";
	cin >> b;
	
	cout << endl;
	cout << "TRIPLO = " << triplo(a);
	cout << endl;
	cout << "QUADRUPLO = " << quadruplo(b);
	
	return 0;
}