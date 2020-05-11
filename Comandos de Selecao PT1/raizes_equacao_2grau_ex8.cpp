#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

//variaveis
float a, b, c, delta, x1, x2;
int main(){
	//colocar acentos no output
	setlocale(LC_ALL, "portuguese");
	
	//ler os coeficientes da equacao
	cout<<"Calculadora de equa��es de 2� grau"<<endl;
	cout<<"a(x^2) + bx + c = 0"<<endl;
	cout<<"Entre a:"<<endl;
	cin>>a;
	cout<<"Entre b:"<<endl;
	cin>>b;
	cout<<"Entre c:"<<endl;
	cin>>c;
	
	//calcular delta
	delta = pow(b, 2.0f) - 4*a*c;
	if(delta < 0){
		//caso o delta d� negativo
		cout<<"N�o existem raizes reais para esta equa��o.";
	}
	else{
		//caso o delta d� positivo
		x1 = (-b + pow(delta, 0.5f))/(2*a);
		x2 = (-b - pow(delta, 0.5f))/(2*a);
		cout<<"A solu��o desta equa��o � S = {"<<x1<<","<<x2<<"}, pertencente aos Reais.";
	}
		
}
