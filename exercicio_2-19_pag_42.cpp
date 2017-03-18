#include <stdio.h>
#include <math.h>
int main(){
	float R=0, area=0, volume=0;
	printf("digite o raio do circulo em Metros: ");
	scanf("%f", &R);
	area = (4*M_PI)*pow(R,2);
	volume = ((4*M_PI)*pow(R,3))/3;
	printf("O valor Area: %f em Metros  \nO valor do Volume: %f em Litros",area,volume);
	
}
