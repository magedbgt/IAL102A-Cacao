// divisivel_por_2_e_ou_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

//variaveis
float preco, litros, valorpagar;
char combustivel;
string gas;

int main()
{
	//acento
	setlocale(LC_ALL, "portuguese");

	//introdução e leitura da variavel
	cout << "Bem vindo ao posto Gasosa! \n Entre o tipo de combustível que gostaria de colocar: \n";
	cout << " E - Etanol \n Preço: 2.25 \n ---- \n G - Gasolina \n Preço: 3.30 \n ---- \n D - Diesel \n Preço: 4.22 \n ---- \n";
	cin >> combustivel;
	cout << "Entre o valor que deseja pagar: \n";
	cin >> valorpagar;

	//calculos
	if (combustivel == 'E'){
		//etanol
		preco = 2.25f;
		gas = "etanol";
	}
	else if (combustivel == 'G'){
		//gasolina
		preco = 3.30f;
		gas = "gasolina";
	}
	else {
		//diesel
		preco = 4.22f;
		gas = "diesel";
	}

	litros =  valorpagar / preco;

	//mostrar resultados
	cout << "Foram colocados " << litros << " litros de " << gas<<". \n";
	
	



}
