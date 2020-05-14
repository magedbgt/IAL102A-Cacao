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
	if (salario <= 1000) {
		aumento = 0.15f;
	}
	else if (salario <= 2000) {
		aumento = 0.10f;
	}
	else if (salario <= 3000) {
		aumento = 0.05f;
	}
	else {
		aumento = 0.03f;
	}

	//calcular novo salario
	salario = salario + (salario*aumento);

	//mostrar novo salario
	cout << "Seu novo salário é R$" << salario << endl;
}

