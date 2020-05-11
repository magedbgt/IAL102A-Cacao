#include <iostream>
#include <locale.h>
using namespace std;

//variaveis
float num1, num2, calc;
int main(){
	//colocar acentos no output
	setlocale(LC_ALL, "Portuguese");
	
	//ler as variaveis
	cout<<"Entre o número 1: \n";
	cin>>num1;
	cout<<"Entre no número 2: \n";
	cin>>num2;
	
	//calcular saída de comparação
	calc = num1-num2;
	
	if(calc > 0){
		//se for positivo
		cout<<num1;
	}
	else if(calc < 0){
		//se for negativo
		cout<<num2;
	}else{
		//se der zero
		cout<<"Os números são iguais.";
	}
}
