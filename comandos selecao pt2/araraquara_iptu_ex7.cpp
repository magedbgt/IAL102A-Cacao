
#include <iostream>
#include <locale.h>
using namespace std;

//variaveis
float area, iptu;
int preco;
char tipo;

int main()
{
	//acento
	setlocale(LC_ALL, "portuguese");

	//introdu��o e leitura da variavel
	cout << "Saiba o quanto de IPTU voce deve pagar! \n";
	cout << "Entre a �rea do terreno em metros quadrados: \n";
	cin >> area;
	cout << "Entre o tipo de im�vel: \n C - Comercial \n ---- \n I - Industrial \n ---- \n R - Residencial \n ---- \n";
	cin >> tipo;

	//preco por tipo
	if (tipo == 'R') {
		preco = 2;
	}
	else if (tipo == 'C') {
		preco = 4;
	}
	else {
		preco = 5;
	}

	//calculo
	iptu = area * preco;

	//output
	cout << "Voce deve pagar R$" << iptu << " de IPTU. \n";
}