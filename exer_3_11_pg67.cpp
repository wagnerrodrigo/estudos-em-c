#include <stdio.h>

int main(){
	char estCivil;
	
//	S = Solterio
//	C = Casado
//	D = Divorciado
//  V = Viúvo

	puts("Qual o Estado Civil: ");
	estCivil = getchar();
	if(estCivil == 'S' || estCivil == 's' )
		printf("VAMOS MEXER PESSOAL !!!!");
	else
		if (estCivil == 'C' || estCivil == 'c' )
			printf("MEU PESAMES HAHAHAHA");
		else
			if(estCivil == 'D' || estCivil == 'd' )
				printf("PO ASSIM NAO DA ASSINAR VIDINHA HAHAHAHA");
				else
					if (estCivil == 'V' || estCivil == 'v' )
						printf("PANELA VELHA E QUE FAZ COMIDA BOA !!!");
						else
							printf("EU QUERO SER ESSA METAMORFOSE AMBULANTE !!!!");
	
	printf("\n");
}
