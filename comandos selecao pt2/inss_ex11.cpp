#include <iostream>
#include <locale.h>
using namespace std;

//variaveis
float salario, inss;

int main()
{
	//acentos
	setlocale(LC_ALL, "portuguese");

	//ler as variaveis
	cout << "Entre o salário em R$: \n";
	cin >> salario;

	//se o salario se encontrar na tabela do exercício
	if (salario >=0 && salario < 1430) {
		//estabelecer o preço
		if (salario <= 429) {
			inss = 0.075f;
		}
		else if (salario > 429 && salario <= 540) {
			inss = 0.08f;
		}
		else if (salario > 540 && salario <= 715) {
			inss = 0.1f;
		}
		else {
			inss = 0.12f;
		}

		//calcular valor da contribuição e mostrar
		inss = inss * salario;
		cout << "O valor da contribuição é de R$" << inss << endl;
	}
	else {
		cout << "Valor não encontrado. Impossível estabelecer a alíquota de contribuição. \n";
	}

}

