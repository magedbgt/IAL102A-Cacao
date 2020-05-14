#include <iostream>
#include <locale.h>

using namespace std;

//declaração de variáveis
float imposto[6] = { 0.35f, 0.25f, 0.15f, 0.1f, 0.05f, 0.0f }, preco, imposto_;
int estado[6] = { 1,2,3,4,5,6 }, codigo;

int main() {
	//acentuação
	setlocale(LC_ALL, "portuguese");

	//ler as variáveis
	cout << "Por favor, entre o valor do produto: \n";
	cin >> preco;
	cout << "Entre o código do Estado de origem (1 a 6): \n ";
	cin >> codigo;


	//logica para atribuição do valor

	//achar o tamanho da array para iterar
	int arrLen = *(&estado + 1) - estado;
	for (int i = 0; i < arrLen; i++) {
		if (codigo == estado[i]) {
			cout << "O imposto para produtos deste Estado é de " << imposto[i] * 10 << "% \n";
			imposto_ = preco * imposto[i];
			cout << "O valor do imposto é de R$" << imposto_ << endl;
		}
	}
}

