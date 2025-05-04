#include <iostream>

using namespace std;

float valorCarro(float custoInicial) {
	float parteFornecedor = custoInicial * 0.28;
	float imposto = custoInicial * 0.45;
	
	return custoInicial + parteFornecedor + imposto;
}
int main() {
	float custoInicial = 0.00;
	
	cout << "Insira o valor inicial do carro: ";
	cin >> custoInicial;
	
	cout << endl;
	cout << "VALOR INICIAL = " << custoInicial;
	cout << endl;
	cout << "VALOR FINAL APOS ENCARGOS = " << valorCarro(custoInicial);	
	
	return 0;
}