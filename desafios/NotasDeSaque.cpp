#include <iostream>
using namespace std;

//declaração variáveis
int notas[7] = {100, 50, 20, 10, 5, 2, 1};
int notasSaque[7] = {}; 
int valorSaque;
int main(){
	
	//ler o valor do saque
	cout<<"Entre o valor a ser retirado: ";
	cin>>valorSaque;
	
	//calcular e mostrar o resultado
	for(int i=0; i < 7; i++){
	 notasSaque[i] = valorSaque/notas[i];
	 cout<<notasSaque[i]<<" notas de "<<notas[i]<<" Reais \n";
	 valorSaque = valorSaque%notas[i];
	};
		
}
