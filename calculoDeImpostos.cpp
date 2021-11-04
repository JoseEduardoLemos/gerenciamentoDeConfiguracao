#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void calculaIRRF(float sal){
	float IRRF = 0;
	
	if(sal <= 1903.98){
		IRRF = 0;
		printf("\nSeu IRRF será de: %.2f",IRRF);
	}
	else if(sal > 1903.99 && sal < 2826.65){
		IRRF = sal * 0.075;
		printf("\nSeu IRRF será de: %.2f",IRRF);
	}
	else if(sal >2826.66 && sal < 3751.05){
		IRRF = sal * 0.15;
		printf("\nSeu IRRF será de: %.2f",IRRF);
	}
	else if(sal >3751.06 && sal < 4664.68){
		IRRF = sal * 0.22,50;
	printf("\nSeu IRRF será de: %.2f",IRRF);
	}
	else if (sal >4664.68){
		IRRF = sal * 0.27,50;
		printf("\nSeu IRRF será de: %.2f",IRRF);
	}
}

void calculaContribuicao(float sal){
	float contribuicao = 0;
	
	if(sal <= 1100){
		contribuicao = sal * 0.075;
		printf("\nSua contribuição para o INSS será de: %.2f",contribuicao);
	}
	else if(sal > 1100.01 && sal < 2203.48){
		contribuicao = sal * 0.09;
		printf("\nSua contribuição para o INSS será de: %.2f",contribuicao);
	}
	else if(sal >2203.49 && sal < 3305.22){
		contribuicao = sal * 0.12;
		printf("\nSua contribuição para o INSS será de: %.2f",contribuicao);
	}
	else if(sal >3305.22 && sal < 6433.57 ){
		contribuicao = sal * 0.14;
		printf("\nSua contribuição para o INSS será de: %.2f",contribuicao);
	}
	else if(sal > 6433.57){
		contribuicao = sal * 0.14;
		printf("\nSua contribuição para o INSS será de: %.2f",contribuicao);
	}
	calculaIRRF(sal);
	
}
void validaCPF(char cpf[12]){
	bool isValido = false;
	int cpfVetor[12];
	do {
		if(strlen(cpf) != 11){
			printf("\nChupa!");
		}
		else{
			
			for(int x=0; x<12; x++){
				cpfVetor[x] = atoi(cpf);
			}
			
			for (int posi=0; posi<12; posi++){
				for (int cont=11; cont<=2; cont--){
					
				}
			}
		}
	}while (strlen(cpf) == 11 && isValido==true);
	printf("\n %d \n", cpfVetor);
}

void menu(){
		
	char cpf[12];
	printf("Informe seu CPF (sem traços e pontos): ");
	scanf("%s",&cpf);
	validaCPF(cpf);
		
	float sal;	
	printf("Informe seu salário: ");
	scanf("%f",&sal);
	calculaContribuicao(sal);
	
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	menu();	
}

