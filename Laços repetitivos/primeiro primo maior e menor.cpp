#include <stdio.h>

int main(){
	
	int n, candidato=2, primosachados=0, div, eprimo, subs;
	
	scanf("%d", &n);
	subs=n;
	
	while(primosachados<1){
		div = 2;
		eprimo = 1;
		
		while(div<=n/2){
			if(n%div==0)
				eprimo = 0;
			div++;
		}
		if(eprimo==1){
			printf("\n%d", n);
			primosachados++;
		}
		n--;
	}
	
	primosachados = 0;
	
	while(primosachados<1){
		div = 2;
		eprimo = 1;
		
		while(div<=subs/2){
			if(subs%div==0)
				eprimo = 0;
			div++;
		}
		if(eprimo==1){
			printf("\n%d", subs);
			primosachados++;
		}
		subs++;
	}
}
