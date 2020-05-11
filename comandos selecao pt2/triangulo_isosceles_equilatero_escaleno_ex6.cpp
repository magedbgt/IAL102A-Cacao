// divisivel_por_2_e_ou_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

//variaveis
float lado1, lado2, lado3;
string triangulo;

int main()
{
	//acento
	setlocale(LC_ALL, "portuguese");

	//introdução e leitura da variavel
	cout << "Triangulo equilátero, isósceles ou escaleno? \n";
	cout << "Entre o lado1 do triangulo: \n";
	cin >> lado1;
	cout << "Entre o lado2 do triangulo: \n";
	cin >> lado2;
	cout << "Entre o lado3 do triangulo: \n";
	cin >> lado3;

	//comparações
	if (lado1 == lado2 && lado2 == lado3) {
		//triangulo equilatero (todo triangulo equilatero é isosleces)
		triangulo = "equilátero";
	}
	else if (lado1 == lado2 || lado2 == lado3) {
		//triangulo isosceles
		triangulo = "isósceles";
	}
	else {
		triangulo = "escaleno";
	}

	//output
	cout << "Este triangulo é " << triangulo << ". \n";
}