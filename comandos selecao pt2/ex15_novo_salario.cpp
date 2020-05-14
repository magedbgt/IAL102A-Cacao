#include <iostream>
#include <locale.h>

using namespace std;

//declara��o de vari�veis
float aumento, salario;

int main() {
	//acentua��o
	setlocale(LC_ALL, "portuguese");

	//ler as vari�veis
	cout << "Por favor, entre o sal�rio atual: \n";
	cin >> salario;

	//logica para atribui��o do valor
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
	cout << "Seu novo sal�rio � de R$" << salario << endl;
}

