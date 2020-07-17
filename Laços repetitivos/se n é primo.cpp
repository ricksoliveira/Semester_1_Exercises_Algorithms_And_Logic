#include <stdio.h>

int main(){
	
	int n, div, eprimo;
	eprimo=1;
	div=2;
	
	scanf("%d", &n);
	
	while(div<=n/2){
		if(n%div==0){
			eprimo = 0;
			printf("nao eh primo");
			break;
		}
		div++;
	}
	if(eprimo == 1) printf("eh primo");
	
}
