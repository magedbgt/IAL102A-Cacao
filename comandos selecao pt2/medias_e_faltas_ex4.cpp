// divisivel_por_2_e_ou_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

//variaveis
float nota1, nota2, nota3, media;
int faltas;
string aprovado;

int main()
{
	//acento
	setlocale(LC_ALL, "portuguese");

	//introdu��o e leitura da variavel
	cout << "Saiba se foi reprovado, aprovado ou est� de recupera��o! \n";
	cout << "Entre a primeira nota: \n";
	cin >> nota1;
	cout << "Entre a segunda nota: \n";
	cin >> nota2;
	cout << "Entre a terceira nota \n";
	cin >> nota3;
	cout << "Entre o n�mero de faltas: \n";
	cin >> faltas;

	//calculos
	media = (nota1 + nota2 + nota3) / 3;

	//aprovacoes
	if (media >= 6 && faltas <= 20) {
		aprovado = "aprovado";
	}
	else {
		aprovado = "reprovado";
	}

	//output
	cout << "\nSua m�dia foi de " << media << ", com "<<faltas<<" faltas e voce est� " << aprovado << ". \n";



}