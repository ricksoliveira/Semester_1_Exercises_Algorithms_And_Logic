#include <stdio.h>

int main(){
	
	int divisor, candidato, primosachados, n, eprimo;
	candidato = 2;
	primosachados = 0;
	
	scanf("%d",&n);
	
	while(primosachados < n){
		divisor = 2;
		eprimo = 1;
		
		while(divisor <= candidato/2){
			if(candidato % divisor == 0)
			eprimo = 0;
			divisor++;
		}
		if(eprimo == 1){
			printf("\n%d", candidato);
			primosachados++;
		}
		candidato++;
	}
}
