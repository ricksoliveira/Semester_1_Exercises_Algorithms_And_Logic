#include <stdio.h>

int main(){
	
	int divisor, candidato, primosImpressos, n, eprimo;
	
	printf("\n Digite um n´umero inteiro positivo:");
	scanf("%d",&n);
	candidato = 2;
	primosImpressos = 0;
	
	while(primosImpressos < n){
			divisor = 2;
			eprimo=1;
		while( (divisor <= candidato/2) && (eprimo) ){
			if(candidato % divisor == 0)
				eprimo = 0;
				divisor++;
		}
		if(eprimo){
			printf("%d, ", candidato);
			primosImpressos++;
		}
		candidato++;
	}
}
