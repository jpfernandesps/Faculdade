#include <iostream>

using namespace std;

int duracaoJogo(int horaInicio, int horaTermino) {
	
	return (horaTermino - horaInicio + 24) % 24;
}

int main() {
	int horaInicio = 0;
	int horaTermino = 0;
	
	cout << "INSIRA O HORARIO DE INICIO DO JOGO: ";
	cin >> horaInicio;
	cout << "INSIRA O HORARIO DE TERMINO DO JOGO: ";
	cin >> horaTermino;
	
	cout << endl;
	cout << "A DURACAO DO JOGO E DE " << duracaoJogo(horaInicio, horaTermino) << " HORAS.";
	
	return 0;
}