#include <stdio.h>

int main(){
	
	int vet[50], c, n, i, j, cont=0;
	
	scanf("%d", &n);
	printf("\n");
	
	for(i=0; i<n; i++){
		scanf("%d", &vet[i]);
	}
	
	printf("\nValor de C: ");
	scanf("%d", &c);
	
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(vet[i]*vet[j] == c){
				printf("%d e %d\n", vet[i], vet[j]);
				cont++;
			}
		}
	}
	if(cont==0)
		printf("nao existem tais numeros");
		
}
