#include <stdio.h>

int main(){
	
	int matriculas[10], numero, i, j, cont=0, achou=0;
	
	for(i=0; i<10; i++){
		printf("Matricula %d: ", i+1);
		scanf("%d", &matriculas[i]);
	}
	
	printf("\n\n");
	
	while(cont<3){
		scanf("%d", &numero);
		for(i=0; i<10; i++){
			if(numero == matriculas[i]){
				achou = 1;
			}
		}
		if(achou == 1){
			printf("ta sim\n");
			achou = 0;
		}
		else{
			printf("ta nao\n");
		}
		cont++;
	}
	
}
