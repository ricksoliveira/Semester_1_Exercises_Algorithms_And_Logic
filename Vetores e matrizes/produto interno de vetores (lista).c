#include <stdio.h>

int main(){
	
	int n, i, j;
	double VetU[50], VetV[50], prod, acu;
	acu = 0;
	
	scanf("%d", &n);
	printf("\n");
	
	printf("Para Vetor U:\n");
	for(i=0; i<n; i++){
		scanf("\n%lf", &VetU[i]);
	}
	
	printf("\n");
	
	printf("Para Vetor V:\n");
	for(i=0; i<n; i++){
		scanf("\n%lf", &VetV[i]);
	}
	
	for(i=0; i<n; i++){
		prod = VetU[i] * VetV[i];
		acu = acu + prod;
	}
	
	printf("\nProduto Interno: %.3lf", acu);
}
