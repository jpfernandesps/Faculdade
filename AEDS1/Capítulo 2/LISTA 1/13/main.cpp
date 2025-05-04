#include <iostream>

using namespace std;

void segundosMinutosHoras(int segundos) {
	int horas = segundos / 3600;
	int segundosRestantes = segundos % 3600;
	int minutos = segundosRestantes / 60;
	int segundosFinais = segundosRestantes % 60;
	
	cout << segundos << " SEGUNDOS EQUIVALEM A " << horas << " HORAS, " << minutos << " MINUTOS E " << segundosFinais << " SEGUNDOS.";
}

int main() {
	int segundos = 0;
	
	cout << "INSIRA UM VALOR EM SEGUNDOS: ";
	cin >> segundos;
	
	cout << endl;
	segundosMinutosHoras(segundos);
	
	return 0;
}