#include <stdio.h>
#include <stdlib.h>
int main(){
	int num;
	printf("Insira um numero inteiro: ");
	scanf("%d",&num); // atencçao no %d
	printf("Foi inserido %d cujo caractere = '%c'\n", num,(char) num); //atençao no % c   acho que se ler (char) num >> char de numero?
	printf("O caractere seguinte = '%c' tem o ASCII numero %d\n",(char) (num+1), num+1);
}
