#include <iostream>
#include <locale.h>

using namespace std;

//declara��o de vari�veis
float imposto[6] = { 0.35f, 0.25f, 0.15f, 0.1f, 0.05f, 0.0f }, preco, imposto_;
int estado[6] = { 1,2,3,4,5,6 }, codigo;

int main() {
	//acentua��o
	setlocale(LC_ALL, "portuguese");

	//ler as vari�veis
	cout << "Por favor, entre o valor do produto: \n";
	cin >> preco;
	cout << "Entre o c�digo do Estado de origem (1 a 6): \n ";
	cin >> codigo;


	//logica para atribui��o do valor

	//achar o tamanho da array para iterar
	int arrLen = *(&estado + 1) - estado;
	for (int i = 0; i < arrLen; i++) {
		if (codigo == estado[i]) {
			cout << "O imposto para produtos deste Estado � de " << imposto[i] * 10 << "% \n";
			imposto_ = preco * imposto[i];
			cout << "O valor do imposto � de R$" << imposto_ << endl;
		}
	}
}

