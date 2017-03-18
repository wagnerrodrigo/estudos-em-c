#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float num=0,Res=0;
	printf("digite o valor: ");
	scanf("%f",&num);
	Res= log(num);
	if(Res>=0){
		printf("O valor do logaritmo neperiano e %f ", Res);
	}else	
	printf("O logaritmo neperiano e menor que zero %f ", num);
		
}
