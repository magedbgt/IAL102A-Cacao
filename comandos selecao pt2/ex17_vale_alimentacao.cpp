#include <iostream>
#include <locale.h>

using namespace std;

//declaração de variáveis
float salario, vale;
int setor;

int main() {
	//acentuação
	setlocale(LC_ALL, "portuguese");

	//ler as variáveis
	cout << "Por favor, entre seu salário: \n";
	cin >> salario;
	cout << "Entre o código do setor (1 ou 2): \n ";
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

	//exibir vale alimentação
	cout << "Seu vale-alimentação é de R$" << vale << endl;
}

