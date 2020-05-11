#include <iostream>
#include <locale.h>
using namespace std;

//variaveis
float salarioliquido, inss, ir, salariobruto;

//comparacao entre int e float sempre converte o int para float. Entao ja defini a var como float para diminuir overheads
const float limiteINSS = 640.0f;

int main(){
	//colocar acentos no output
	setlocale(LC_ALL, "Portuguese");
	
	//ler as variaveis
	cout<<"Entre o valor do salário: \n";
	cin>>salariobruto;
	
	//calcular INSS
	inss = salariobruto*0.11f;
	
	if(inss > limiteINSS){
		inss = limiteINSS;
	}
	
	//calcular % de ir
	if(salariobruto < 1500){
		//se o salário for menor que R$1500,00
		ir = salariobruto * 0.1f;
	}
	else{
		//se o salario for maior ou igual a R$1500,00
		ir = salariobruto * 0.15f;
	}
	
	//calcular o salario liquido
	salarioliquido = salariobruto - inss - ir;
	
	//mostrar salario liquido
	cout<<"Seu salário líquido é de R$"<<salarioliquido;
		
}
