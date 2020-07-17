#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char operacao;
	double numero1, numero2;
	
	printf("Digite o primeiro numero:  ");
	scanf("%lf", &numero1);
	printf("\n");
	
	printf("Selecione a operacao que deseja realizar\n\n\t[/, *, -, +]   ");
	scanf(" %c", &operacao);
	printf("\n");
	
	printf("Digite o segundo numero:  ");
	scanf("%lf", &numero2);
	printf("\n");
	
	switch(operacao){
		
		case '/':
			printf("%.2lf / %.2lf = %.3lf", numero1, numero2, numero1/numero2);
			break;
		
		case '*':
			printf("%.2lf * %.2lf = %.3lf", numero1, numero2, numero1*numero2);
			break;
		
		case '-':
			printf("%.2lf - %.2lf = %.3lf", numero1, numero2, numero1-numero2);
			break;
		
		case '+':
			printf("%.2lf + %.2lf = %.3lf", numero1, numero2, numero1+numero2);
			break;
		
		default:
			printf("Operacao incorreta, selecione novamente.");
			break;
	}
	
	printf("\n");
	system("pause");
	return 0;
}
