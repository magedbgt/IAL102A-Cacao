#include <iostream>
#include <locale.h>
using namespace std;

//variaveis
int input;
const int senha = 20200317;

int main(){
	//colocar acentos no output
	setlocale(LC_ALL, "Portuguese");
	
	//ler as variaveis
	cout<<"Entre a senha (8 d�gitos): \n";
	cin>>input;
	
	if(input == senha){
		//se a senha digitada est� correta
		cout<<"Acesso permitido";
	}
	else{
		//se n�o estiver correta
		cout<<"Acesso NEGADO";
	}
	
		
}
