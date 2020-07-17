#include <stdio.h>

int main(){
	
	char sexo;
	int idade, cont;
	
	printf("Escolha o sexo da pessoa\n[M - Masculino ou F - Feminino]: ");
	scanf("%c", &sexo);
	
	printf("\nDigite a idade da pessoa: ");
	scanf("%d", &idade);
	
	printf("Digite quantos anos de contribuicao a pessoa tem: ");
	scanf("%d", &cont);
	
	switch(sexo){
		case'M':
			if((idade >= 65 && cont >= 10) || (idade >= 63 && cont >= 15))
				printf("\nAposentavel");
			else
				printf("\nNao aposentavel");
			break;
		
		case'F':
			if((idade >= 63 && cont >= 10) || (idade >= 61 && cont >= 15))
				printf("\nAposentavel");
			else
				printf("\nNao aposentavel");
			break;
		
		default:
			printf("\nErro na escolha do sexo da pessoa\ndigite M ou F com letra maiscula.");
	}
}
