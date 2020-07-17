#include <stdio.h>

int main(){
	
	double transacao, comissao;
	
	printf("Digite o valor da transacao em R$: ");
	scanf("%lf", &transacao);
	
	if(transacao <= 529.11)
		printf("Comissao sera de: R$ 39.00");
	
	else if(transacao >= 529.12 && transacao <= 2500.00)
		printf("Comissao sera de: R$ %.2lf", 30+(transacao)*(0.017));
		
	else if(transacao >= 2500.01 && transacao <= 6250.00)
		printf("Comissao sera de: R$ %.2lf", 56+(transacao)*(0.0066));
		
	else if(transacao >= 6250.01 && transacao <= 20000.00)
		printf("Comissao sera de: R$ %.2lf", 76+(transacao)*(0.0034));
		
	else if(transacao >= 20000.01 && transacao <= 50000.00)
		printf("Comissao sera de: R$ %.2lf", 100+(transacao)*(0.0022));
		
	else if(transacao >= 50000.01 && transacao <= 500000.00)
		printf("Comissao sera de: R$ %.2lf", 155+(transacao)*(0.0011));
		
	else if(transacao > 500000.00)
		printf("Comissao sera de: R$ %.2lf", 255+(transacao)*(0.0009));
	
	return 0;
}
