#include <iostream>
#include <locale.h>

using namespace std;

//declara��o de vari�veis
float salario, desconto;
int setor, anos;

int main() {
	//acentua��o
	setlocale(LC_ALL, "portuguese");

	//ler as vari�veis
	cout << "Por favor, entre seu sal�rio: \n";
	cin >> salario;

	cout << "Entre o tempo de empresa em anos: \n";
	cin >> anos;

	cout << "Entre o c�digo do setor (1 ou 2): \n ";
	cin >> setor;

	//logica para atribuir valor
	if (salario > 850) {
		if (anos > 3) {
			if (setor == 1) {
				desconto = 0.075f;
			}
			else {
				desconto = 0.085f;
			}
		}
		else {
			if (setor == 1) {
				desconto = 0.07f;
			}
			else {
				desconto = 0.08f;
			}
		}

	}
	else {
		if (anos > 3) {
			if (setor == 1) {
				desconto = 0.055f;
			}
			else {
				desconto = 0.065f;
			}
		}
		else {
			if (setor == 1) {
				desconto = 0.05f;
			}
			else {
				desconto = 0.06f;
			}
		}
	}

	//calcular e exibir desconto
	cout << "A taxa de desconto � de " << desconto << "% \n";
	salario = salario * desconto;
	cout << "O desconto total � de R$" << salario << endl;
}

