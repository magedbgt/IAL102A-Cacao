// divisivel_por_2_e_ou_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

//variaveis
float peso, altura, imc;
string classificacao;

int main()
{
	//acento
	setlocale(LC_ALL, "portuguese");

	//introdução e leitura da variavel
	cout << "Saiba seu IMC e se está magro, normal, com sobrepeso ou obeso! \n";
	cout << "Entre sua altura em metros: \n";
	cin >> altura;
	cout << "Entre seu peso em quilogramas: \n";
	cin >> peso;

	//calculos
	imc = peso / (altura*altura);

	//classificacao
	if (imc < 22) {
		classificacao = "magro";
	}
	else if (imc >= 22 && imc <= 26) {
		classificacao = "normal";
	}
	else if (imc > 26 && imc <= 30) {
		classificacao = "com sobrepeso";
	}
	else {
		classificacao = "obeso";
	}

	//output
	cout << "Seu imc é " << imc << " e voce está " << classificacao << ". \n";

}