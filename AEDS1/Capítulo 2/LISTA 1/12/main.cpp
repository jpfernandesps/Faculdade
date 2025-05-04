#include <iostream>

using namespace std;

int valorX(int a, int b, int c, int d, int e, int f) {
	
	return (c * e - b * f) / (a * e - b * d);
}

int valorY(int a, int b, int c, int d, int e, int f) {
	
	return (a * f - c * d) / (a * e - b * d);
}

int main() {
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;
	int f = 6;
	
	cout << "Resultado de X = " << valorX(a, b, c, d, e, f); 
	cout << endl << endl;
	cout << "Resultado de Y = " << valorY(a, b, c, d, e, f);
	
	return 0;
}