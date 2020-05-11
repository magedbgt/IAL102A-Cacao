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

	//introdução e leitura da variavel
	cout << "Saiba se foi reprovado, aprovado ou está de recuperação! \n";
	cout << "Entre a primeira nota: \n";
	cin >> nota1;
	cout << "Entre a segunda nota: \n";
	cin >> nota2;
	cout << "Entre a terceira nota \n";
	cin >> nota3;
	cout << "Entre o número de faltas: \n";
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
	cout << "\nSua média foi de " << media << ", com "<<faltas<<" faltas e voce está " << aprovado << ". \n";



}