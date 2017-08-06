#include <stdio.h>
int main(){
	float salario;
	printf("Qual seu Salario : ");
	scanf("%f",&salario);
	salario = salario > 1000 ? salario*1.05 : salario*1.07; // operador condicional 
	// operador condicional >>> condição ? expressão1 : expressão2
	
	//salario = salario * (salario > 1000) ? 1.05 : 1.07 ;
	//salario = salario * (1 + ( salario > 1000) ? .05 : .07);
	//salario = salario * salario * ((salario > 1000) ? .05 : .07);
	
	printf("Novo Salario: %2.f\n\a", salario);
	
}
