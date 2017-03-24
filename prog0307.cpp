#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float salario,taxa;
	printf("O seu Salario e: ");
	scanf("%f",&salario);
	if (salario<1000)
		taxa=0.05;
	else
		if (salario<5000)
			taxa=.11;
		else
			taxa=.35;
	printf("Salario: %.2f Impostos: %.2f liquido: %.2f\n",
	salario,salario*taxa,salario*(1.0-taxa));
}
