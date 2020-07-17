#include <stdio.h>
#include <locale.h>

int main(){
	
	int n, i, acum;
	acum = 0;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Considere a expressão: 1 + 3 + 5 + ... + 2n-1 = n^2");
	printf("\nDigite um valor para n para testá-la verdadeira: ");
	scanf("%d", &n);
	
	printf("\n\n\tPara n = %d", n);
	
	for(i=1; i<=n; i++){
		acum = 2*i-1 + acum;
		printf("\nSoma dos %d primeiros termos: %d", i, acum);
	}
	
	if(acum == n*n*n)
		printf("\n\nA expressão é VERDADEIRA para este n,\n\nSoma dos %d primeiros termos é %d\nn^2 = %d", n, acum, n*n);
	else
		printf("\nExpressão não verdadeira para n = %d", n);
}
