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
	cout << "Verifica��o da divis�o de um n�mero por 2 e 5 \n";
	cout << "Entre o n�mero (inteiro) a ser verificado: \n";
	cin >> num;

	if ((num % 2) == 0 && (num % 5) == 0) {
		//se o numero for divisivel por 2 e 5
		cout << num << " � par e m�ltiplo de 5";
	}
	else if ((num % 2) == 0 && (num % 5) != 0) {
		//se o numero for divisivel por 2 mas n�o por 5
		cout << num << " � par mas n�o � m�ltiplo de 5";
	}
	else if ((num % 5) == 0 && (num % 2) != 0) {
		//se o n�mero for divisivel por 5 mas n�o for par
		cout << num << " n�o � par mas � m�ltiplo de 5";
	}
	else {
		//n�o � divis�vel nem por 2 nem por 5
		cout << num << " n�o � divis�vel nem por 2 nem por 5";
	}
}
