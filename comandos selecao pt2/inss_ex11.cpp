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
	cout << "Entre o sal�rio em R$: \n";
	cin >> salario;

	//se o salario se encontrar na tabela do exerc�cio
	if (salario >=0 && salario < 1430) {
		//estabelecer o pre�o
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

		//calcular valor da contribui��o e mostrar
		inss = inss * salario;
		cout << "O valor da contribui��o � de R$" << inss << endl;
	}
	else {
		cout << "Valor n�o encontrado. Imposs�vel estabelecer a al�quota de contribui��o. \n";
	}

}

