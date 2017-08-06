#include <stdio.h>

int main(){
	float meu_Salario;
	char est_Civil;
	printf("Seu DinDin en :");
	scanf("%f", &meu_Salario);
	printf("Qual seu Estado Civil :", &est_Civil);
	scanf("%s", &est_Civil);
	if(est_Civil == 'C'|| est_Civil == 'c'){
		printf("Imposto :  %.2f\n", meu_Salario *0.09);
	}	
	else{
	
		if(est_Civil == 'S' || est_Civil == 's'){
			printf("Imposto : %2.f\n", meu_Salario*0.10);
		}
		else {
			printf("Estado Civil Incorreto !!!! \n");
		}

	}
	
}
