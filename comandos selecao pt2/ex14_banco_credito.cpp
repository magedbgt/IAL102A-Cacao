#include <iostream>
#include <locale.h>

using namespace std;

//declara��o de vari�veis
float credito, salario;

int main() {
	//acentua��o
	setlocale(LC_ALL, "portuguese");

	//ler as vari�veis
	cout << "Por favor, entre o sal�rio m�dio do �ltimo ano: \n";
	cin >> salario;

	//logica para atribui��o do valor
	if (salario <= 200) {
		credito = 0.15f;
	}
	else if (salario <= 300) {
		credito = 0.20f;
	}
	else if (salario <= 400) {
		credito = 0.25f;
	}
	else {
		credito = 0.3f;
	}

	//calcular valor do credito
	credito = credito * salario;

	//mostrar novo salario
	cout << "Seu cr�dito � de R$" << credito << endl;
}

