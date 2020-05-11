#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

//variaveis
float salario, emprestimo, maxvalorparcela, minprestacoes;
int prestacoes;

int main(){
	//colocar acentos no output
	setlocale(LC_ALL, "Portuguese");
	
	//ler as variaveis
	cout<<"Entre o valor do salário: \n";
	cin>>salario;
	cout<<"Entre o valor do empréstimo: \n";
	cin>>emprestimo;
	cout<<"Entre a quantidade de parcelas: \n";
	cin>>prestacoes;
	
	//calcular o valor maximo de uma parcela
	maxvalorparcela = salario*0.3;
	//calcular o minimo de prestacoes
	minprestacoes = emprestimo/maxvalorparcela;
	//arredondar para o numero de meses
	minprestacoes = ceil(minprestacoes);
	
	if(prestacoes >= minprestacoes){
		//se as prestacoes entradas forem iguais ou maiores ao minimo de parcelas
		float valorparcela = emprestimo/prestacoes;
		cout<<"O empréstimo será concedido em "<<prestacoes<<" parcelas de R$"<<valorparcela;
	}else{
		//se as prestacoes entradas não atingirem o mínimo
		cout<<"O empréstimo não será concedido. O mínimo de parcelas necessárias é de "<<minprestacoes<<" parcelas";
	}
		
}
