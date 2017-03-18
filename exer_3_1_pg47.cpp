#include <stdio.h>
#include <math.h>
int main(){
	float num=0, raiz=0, quar=0;
	printf("digite o numero: ");
	scanf("%f",&num);
	if(num>=0){
	
		 raiz = sqrt(num);
		printf("raiz quadrada do numero: %2.4f", raiz);
	}
	else{
		quar =pow(num,2);
		printf("Numero ao quadrado %2.0f",quar);
	}
}
