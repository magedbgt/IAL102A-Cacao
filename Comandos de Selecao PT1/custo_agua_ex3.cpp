#include <iostream>
#include <locale.h>
using namespace std;

//variaveis
float consumo, custo, valor;
char tipo;
int main(){
	//colocar acentos no output
	setlocale(LC_ALL, "Portuguese");
	
	//ler as variaveis
	cout<<"Entre o consumo de água em litros: \n";
	cin>>consumo;
	cout<<"Entre o tipo de imóvel: \n R - residencial \n C - comercial \n";
	cin>>tipo;
	
	if(tipo == 'R'){
		//caso seja residencial
		custo = 0.03;
	}
	else{
		//caso seja comercial
		custo = 0.05;
	}
	
	//calculo de valor da conta
	valor = consumo * custo;
	
	//mostrar valor da conta
	cout<<"R$"<<valor;
}
