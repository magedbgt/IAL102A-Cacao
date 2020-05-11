#include <iostream>
#include <locale.h>
using namespace std;

//variaveis
float altura, coeficiente1, coeficiente2, PesoIdeal;
char sexo;
int main(){
	//colocar acentos no output
	setlocale(LC_ALL, "Portuguese");
	
	//ler as variaveis
	cout<<"Entre a altura em metros: \n";
	cin>>altura;
	cout<<"Entre o tipo de imóvel: \n F - Feminino \n M - Masculino \n";
	cin>>sexo;
	
	if(sexo == 'F'){
		//caso seja do sexo feminino
		coeficiente1 = 62.1f;
		coeficiente2 = 44.7f;
	}
	else{
		//caso seja do sexo masculino
		coeficiente1 = 72.7f;
		coeficiente2 = 58;
	}
	
	//calculo de valor do peso ideal
	PesoIdeal = coeficiente1*altura - coeficiente2;
	
	//mostrar valor do peso ideal
	cout<<PesoIdeal<<" kg";
}
