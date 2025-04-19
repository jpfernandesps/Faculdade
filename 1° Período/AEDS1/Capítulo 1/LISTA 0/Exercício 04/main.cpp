#include <iostream>

using namespace std;

void calculoIdade () {
	int totalDias = 0;
	int iAnos = 0;
	int iMeses = 0;
	int iDias= 0;
	
	cin >> totalDias;
	
	iAnos = totalDias / 365;
	int resto = totalDias % 365;
	
	iMeses = resto / 30;
	iDias = resto % 30;
	
	cout << "\nSua idade: " << iAnos << ", " << iMeses << ", " << iDias;
}

int main() {
	cout << "DIAS PARA ANOS" << endl;
	
	cout << "\nInforme o total de dias que voce tem: ";
	calculoIdade();
	
	return 0;
}