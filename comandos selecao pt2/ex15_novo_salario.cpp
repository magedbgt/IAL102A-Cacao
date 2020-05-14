#include <iostream>
#include <locale.h>

using namespace std;

//declaração de variáveis
float aumento, salario;

int main() {
	//acentuação
	setlocale(LC_ALL, "portuguese");

	//ler as variáveis
	cout << "Por favor, entre o salário atual: \n";
	cin >> salario;

	//logica para atribuição do valor
	if (salario <= 300) {
		aumento = 0.15f;
	}
	else if (salario <= 600) {
		aumento = 0.10f;
	}
	else if (salario <= 900) {
		aumento = 0.05f;
	}
	else {
		aumento = 0.0f;
	}

	//calcular o novo salario
	salario = salario + (salario * aumento);

	//mostrar novo salario
	cout << "Seu novo salário é de R$" << salario << endl;
}

