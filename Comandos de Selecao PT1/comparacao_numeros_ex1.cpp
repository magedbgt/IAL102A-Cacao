#include <iostream>
#include <locale.h>
using namespace std;

//variaveis
float num1, num2, calc;
int main(){
	//colocar acentos no output
	setlocale(LC_ALL, "Portuguese");
	
	//ler as variaveis
	cout<<"Entre o n�mero 1: \n";
	cin>>num1;
	cout<<"Entre no n�mero 2: \n";
	cin>>num2;
	
	//calcular sa�da de compara��o
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
		cout<<"Os n�meros s�o iguais.";
	}
}
