
#include <iostream>
#include <locale.h>

using namespace std;

//declaração de variáveis
float consumo[3] = {};
float taxa;
float taxa_servico = 31.14f;

int main() {
	//acentuação
	setlocale(LC_ALL, "portuguese");

	//ler as variáveis
	cout << "Por favor, entre o consumo do usuário 1: \n";
	cin >> consumo[0];

	cout << "Por favor, entre o consumo do usuário 2: \n";
	cin >> consumo[1];

	cout << "Por favor, entre o consumo do usuário 3: \n";
	cin >> consumo[2];

	//logica para atribuição do valor

	//achar o tamanho da array para iterar
	int arrLen = *(&consumo + 1) - consumo;
	for (int i = 0; i < arrLen; i++) {
		if (consumo[i] >= 0 && consumo[i] < 200) {
			taxa = 0.0f;
		}
		else if (consumo[i] < 400) {
			taxa = 0.01f;
		}
		else {
			taxa = 0.02f;
		}


		//calculo do consumo + taxa de servico para o usuário em questão
		consumo[i] = (consumo[i] * taxa) + taxa_servico;

		//mostrar valor
		cout << "O usuário nº" << i + 1 << " precisa pagar o valor de R$" << consumo[i] << endl;
	}

}
