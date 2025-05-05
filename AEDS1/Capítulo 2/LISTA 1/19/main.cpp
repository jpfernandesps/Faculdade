#include <iostream>

using namespace std;

void verificarCarteira (int idade) {
	if (idade >= 18) {
		cout << endl << "APTO A TIRAR CARTEIRA";
	}
	else {
		cout << endl << "NAO APTO A TIRAR CARTEIRA";
	}
}

int main() {
	int idade = 0;
	
	cout << "Insira sua idade: ";
	cin >> idade;
	
	verificarCarteira(idade);
	
	return 0;	
}