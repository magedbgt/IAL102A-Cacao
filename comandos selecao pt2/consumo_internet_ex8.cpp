#include <iostream>
#include <locale.h>

//declara��o de vari�veis
float precoMB, consumo, aPagar;
int precoPlano;
char plano;

int main() {
	//acentua��o
	setlocale(LC_ALL, �Portuguese�);

	//ler as vari�veis
	cout << "Por favor, entre o seu tipo de plano: \nO - ouro \nP - prata \nB - bronze";
	cin >> plano;
	cout << "Entre seu consumo em MB (megabyte): \n";
	cin << consumo;

	//logica para atribui��o do pre�o
	if (plano == 'O') {
		precoPlano = 50;
		precoMB = 0.3f;
	}
	else if (plano == 'P') {
		precoPlano = 30;
		precoMB = 0.5f;
	}
	else{
		precoPlano = 20;
		precoMB = 0.8f;
	}

	//calculo a pagar
	aPagar = precoPlano + precoMB * consumo;

	//output
	cout << "O total a pagar � de R$" << aPagar;

}