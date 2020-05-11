#include <iostream>
#include <locale.h>
using namespace std;

//variaveis
float consumo, kwh_preco, icms = 0.18f, valor_pagar;

int main()
{
	//acentos
	setlocale(LC_ALL, "portuguese");

	//ler as variaveis
	cout << "Entre o consumo de energia em Kwh: \n";
	cin >> consumo;

	//estabelecer o pre�o
	if (consumo <= 100) {
		kwh_preco = 0.08f;
	}
	else if (consumo > 100 && consumo <=200) {
		kwh_preco = 0.1f;
	}
	else if (consumo > 200 && consumo <= 500) {
		kwh_preco = 0.12f;
	}
	else {
		kwh_preco = 0.15f;
	}

	//mostrar valor do kwh
	cout << "Valor cobrado do Kwh � de R$" << kwh_preco<<endl;

	//calcular consumo * preco e mostrar o valor
	valor_pagar = consumo * kwh_preco;
	cout << "O valor de consumo � de R$" << valor_pagar << endl;

	//calcular icms e mostrar
	icms = icms * valor_pagar;
	cout << "O valor referente ao ICMS � de R$" << icms << endl;

	//calcular total e mostrar
	valor_pagar = valor_pagar + icms;
	cout << "O total � a pagar � de R$" << valor_pagar << endl;

}

