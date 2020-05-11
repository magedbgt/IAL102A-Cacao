// nadador.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

//variaveis
int idade;
string classificacao;

int main()
{
	//acentuacao
	setlocale(LC_ALL, "portuguese");

	//ler idade
	cout << "Por favor, entre a idade do nadador: \n";
	cin >> idade;

	//lógica
	if (idade >= 18) {
		classificacao = "adulto";
	}
	else if (idade >= 14 && idade <18) {
		classificacao = "juvenil";
	}
	else if (idade >= 9 && idade <14) {
		classificacao = "infantil";
	}
	else
	{
		classificacao = "mirim";
	}

	//output
	cout << "O nadador em questão se enquadra na categoria " << classificacao;
}
