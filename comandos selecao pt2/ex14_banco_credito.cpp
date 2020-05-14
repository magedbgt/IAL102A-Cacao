#include <iostream>
#include <locale.h>

using namespace std;

//declaração de variáveis
float credito, salario;

int main() {
	//acentuação
	setlocale(LC_ALL, "portuguese");

	//ler as variáveis
	cout << "Por favor, entre o salário médio do último ano: \n";
	cin >> salario;

	//logica para atribuição do valor
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
	cout << "Seu crédito é de R$" << credito << endl;
}

