#include <iostream>
#include <locale.h>
using namespace std;

//variaveis
float valor, imposto;
char tipo;
int main(){
	//colocar acentos no output
	setlocale(LC_ALL, "Portuguese");
	
	//ler as variaveis
	cout<<"Entre o valor do produto: \n";
	cin>>valor;
	cout<<"Entre o tipo do produto \n N - nacional \n I - internacional \n";
	cin>>tipo;
	
	if(tipo == 'N'){
		//se o produto for nacional
		imposto = 0.05f;
	}
	else{
		//caso seja internacional
		imposto = 0.1f;
	}
	
	//calcular valor final do produto
	valor = valor + valor*imposto;
	//mostrar valor final do produto
	cout<<"R$"<<valor;
}
