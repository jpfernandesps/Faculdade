#include <iostream>

using namespace std;

void verificarCarteira (int idade) {
	if (idade >= 18) {
		cout << "APTO A TIRAR CARTEIRA";
	}
	else {
		cout << "NAO APTO A TIRAR CARTEIRA";
		cout << endl << "VOCE PODERA TIRAR CARTEIRA EM " << 18 - idade << " ANOS";
	}
}

int main() {
	int idade = 0;
	
	cout << "Insira sua idade: ";
	cin >> idade;
	cout << endl;
		
	verificarCarteira(idade);
	
	return 0;	
}