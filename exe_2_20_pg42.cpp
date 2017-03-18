#include <stdio.h>
#include <math.h>
int main(){
	float Xa=0,Xb=0,Ya=0,Yb=0, distancia=0,Aux=0,Aux1=0;
	printf("digite o ponto Xa da reta: ");
	scanf("%f",&Xa);
	printf("digite o ponto Xb da reta: ");
	scanf("%f",&Xb);
	printf("digite o ponto Ya da reta: ");
	scanf("%f",&Ya);
	printf("digite o ponto Yb da reta: ");
	scanf("%f",&Yb);
	Aux = (Xb-Xa);
	Aux1 =(Yb-Ya);
	distancia = sqrt( (pow(Aux,2) ) +( pow(Aux1,2) ) );
	printf("Ponto A ( %2.1f %2.1f ) Ponto B ( %2.1f %2.1f) a distancia entre dois pontos e %f ",Xa,Ya, Xb,Yb ,distancia);
	
}
