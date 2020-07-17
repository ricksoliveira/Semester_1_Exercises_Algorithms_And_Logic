#include <stdio.h>

int main(){
	
	double vetor[50], acu=0;
	int i, n;
	
	scanf("%d", &n);
	
	if(n>50){
		n=50;
		printf("Tamanho do vetor = 50\n");
	}
	
	for(i=0; i<n; i++){
		scanf("%lf", &vetor[i]);
		acu = acu + vetor[i] / n;
	}
	
	printf("\n%.2lf", acu);
}
