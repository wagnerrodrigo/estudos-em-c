#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Escreva um programa que solicite um salário ao utilizado e mostre
// o imposto a pagar
int main(){
	float salario;
	printf("Digite usa furtuna \\o: ");
	scanf("%f",&salario);
	if(salario<=0)
		printf("Nao e possivel que eu tenha isso : %.2f\n",salario);
	else
		if(salario>1000)
			printf("Bom estou rico mas o leao vai me pegar isso = %.2f \n",salario*0.10);
		else
			printf("Ou sera que vai pegar isso = %f\n ",salario*0.05);
	

}
