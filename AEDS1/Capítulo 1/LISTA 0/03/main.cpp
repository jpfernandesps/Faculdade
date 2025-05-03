#include <iostream>

using namespace std;

int diasVida(int iAnos, int iMeses, int iDias) {	
	
	return (iAnos * 365) + (iMeses * 30) + iDias;
}

int main() {
	int iAnos = 0;
	int iMeses = 0;
	int iDias = 0;
	
	cout << "DIAS VIVIDOS" << endl << endl;
	
	cout << "Informe os anos: ";
	cin >> iAnos;
	cout << "Informe os meses: ";
	cin >> iMeses;
	cout << "Informe os dias: ";
	cin >> iDias;	
	
	cout << endl;
	cout << "Total de Dias Vividos = " << diasVida(iAnos, iMeses, iDias) << " Dias.";
	
	return 0;
}