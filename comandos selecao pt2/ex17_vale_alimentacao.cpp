#include <iostream>
#include <locale.h>

using namespace std;

//declara��o de vari�veis
float salario, vale;
int setor;

int main() {
	//acentua��o
	setlocale(LC_ALL, "portuguese");

	//ler as vari�veis
	cout << "Por favor, entre seu sal�rio: \n";
	cin >> salario;
	cout << "Entre o c�digo do setor (1 ou 2): \n ";
	cin >> setor;

	//logica para atribuir valor
	if (salario > 500) {
		if (setor == 1) {
			vale = 200;
		}
		else {
			vale = 100;
		}
	}
	else {
		if (setor == 1) {
			vale = 300;
		}
		else {
			vale = 250;
		}
	}

	//exibir vale alimenta��o
	cout << "Seu vale-alimenta��o � de R$" << vale << endl;
}

