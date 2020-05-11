#include <iostream>
#include <locale.h>

//declaração de variáveis
float precoPlano, precoMB, consumo, aPagar;
char plano;

int main() {
	//acentuação
	setlocale(LC_ALL, “Portuguese”);

	//ler as variáveis
	cout << "Por favor, entre o seu tipo de plano: \nO - ouro \nP - prata \nB - bronze";
	cin >> plano;
	cout << "Entre seu consumo em MB (megabyte): \n";
	cin << consumo;

	//logica para atribuição do preço
	if (plano == 'O') {
		precoPlano = 50;
		precoMB = 0.3;
	}
	else if (plano == 'P') {
		precoPlano = 30;
		precoMB = 0.5;
	}
	else{
		precoPlano = 20;
		precoMB = 0.8;
	}

	//calculo a pagar
	aPagar = precoPlano + precoMB * consumo;

	//output
	cout << "O total a pagar é de R$" << aPagar;

}