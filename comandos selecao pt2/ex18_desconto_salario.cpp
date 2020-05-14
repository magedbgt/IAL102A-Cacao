#include <iostream>
#include <locale.h>

using namespace std;

//declaração de variáveis
float salario, desconto;
int setor, anos;

int main() {
	//acentuação
	setlocale(LC_ALL, "portuguese");

	//ler as variáveis
	cout << "Por favor, entre seu salário: \n";
	cin >> salario;

	cout << "Entre o tempo de empresa em anos: \n";
	cin >> anos;

	cout << "Entre o código do setor (1 ou 2): \n ";
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
	cout << "A taxa de desconto é de " << desconto << "% \n";
	salario = salario * desconto;
	cout << "O desconto total é de R$" << salario << endl;
}

