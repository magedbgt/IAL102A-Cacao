// abc_maior_valor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale.h>
using namespace std;

//variaveis
float a, b, c, temp;

int main()
{
    //acentos
	setlocale(LC_ALL, "portuguese");

	//ler as variaveis
	cout << "Comparativo entre num1, num2 e num3. Quem é maior? \n";
	cout << "Entre o primeiro valor: \n";
	cin >> a;
	cout << "Entre o segundo valor: \n";
	cin >> b;
	cout << "Entre o terceiro valor: \n";
	cin >> c;

	//comparar a - b
	if ((a - b) > 0) {
		//se a for maior que b
		temp = a;
	}
	else if ((a - b) < 0) {
		//se b for maior que a

		temp = b;
	}
	else {
		//se a = b
		temp = a;
		cout << a << " e " << b << " são iguais \n";
	}

	//comparar c - temp;
	if ((c - temp) > 0) {
		//se c maior que temp
		cout << c << " é o maior valor \n";
	}
	else if ((c - temp) < 0) {
		//se c menor que temp
		cout << temp << " é o maior valor \n";
	}
	else {
		//se temp e c forem iguais
		cout << c << " e " << temp << " são iguais \n";
	}

}

