#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int num=0,num2=0;
	printf("digite o primeiro numero: ");
	scanf("%d",&num);
	printf("digite o segundo numero: ");
	scanf("%d",&num2);
	if(num==num2){
		printf("Os numeros  %d e %d sao iguais\n ",num,num2);
	}else
		printf("Os numeros %d e %d sao diferentes: \n ", num,num2);
	if(num>num2){
		printf("O numero %d e maior que %d \n",num,num2);
	}else
		printf("O numero %d e menor que %d \n",num, num2);
	//printf("\n");
	//system("pause");
	
}
