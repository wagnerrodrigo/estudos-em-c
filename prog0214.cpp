#include <stdio.h>
#include <stdlib.h>
int main(){
	int num;
	printf("Insira um numero inteiro: ");
	scanf("%d",&num); // atenc�ao no %d
	printf("Foi inserido %d cujo caractere = '%c'\n", num,(char) num); //aten�ao no % c   acho que se ler (char) num >> char de numero?
	printf("O caractere seguinte = '%c' tem o ASCII numero %d\n",(char) (num+1), num+1);
}
