#include <iostream>

using namespace std;

int verificadorNotas(int index) {
	int nota = 0;
	
	cout << "Informe o valor da nota " << index << ": ";
	cin >> nota;
	
	if (nota >= 60) {
		return 1;
	} 
	else {
		return 0;
	}
}

int main() {
	int contador = 0;
	
	contador = contador + verificadorNotas(1);
	contador = contador + verificadorNotas(2);
	contador = contador + verificadorNotas(3);
	contador = contador + verificadorNotas(4);
	contador = contador + verificadorNotas(5);
	
	cout << endl << "QUANTIDADE DE NOTAS MAIORES QUE 60 = " << contador;
		
	return 0;
}