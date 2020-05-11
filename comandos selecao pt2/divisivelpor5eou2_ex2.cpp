// divisivel_por_2_e_ou_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale.h>
using namespace std;

//variaveis
int num;

int main()
{
	//acento
	setlocale(LC_ALL, "portuguese");

	//ler numero
	cout << "Verificação da divisão de um número por 2 e 5 \n";
	cout << "Entre o número (inteiro) a ser verificado: \n";
	cin >> num;

	if ((num % 2) == 0 && (num % 5) == 0) {
		//se o numero for divisivel por 2 e 5
		cout << num << " é par e múltiplo de 5";
	}
	else if ((num % 2) == 0 && (num % 5) != 0) {
		//se o numero for divisivel por 2 mas não por 5
		cout << num << " é par mas não é múltiplo de 5";
	}
	else if ((num % 5) == 0 && (num % 2) != 0) {
		//se o número for divisivel por 5 mas não for par
		cout << num << " não é par mas é múltiplo de 5";
	}
	else {
		//não é divisível nem por 2 nem por 5
		cout << num << " não é divisível nem por 2 nem por 5";
	}
}
