#include <stdio.h>
#include <math.h>

int main (){
	
	double s, acumedia=0, acusoma=0, n, soma, v[50];
	int i;
	
	scanf("%lf", &n);
	
	if(n>50){
		n=50;
		printf("Tamanho do vetor = 50\n");
	}
	
	for(i=0; i<n; i++){
		scanf("%lf", &v[i]);
		acumedia = acumedia + v[i]/n;
	}
	
	for(i=0; i<n; i++){
		acusoma = acusoma + pow((v[i] - acumedia),2);
	}
	
	printf("\ndesvio padrao = %.2lf", sqrt(acusoma/(n-1)));
}
