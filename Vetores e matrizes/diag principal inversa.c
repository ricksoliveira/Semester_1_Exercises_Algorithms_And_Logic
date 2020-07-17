#include <stdio.h>

int main(){
	
	int matriz[3][3], diag[3], diaginv[3], i, j;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &matriz[i][j]);
			if(i == j){
				diag[i] = matriz[i][j];
			}
		}
	}
	
	/*for(i=2; i>=0; i--){
		for(j=2; j>=0; j--){
			if(i == j){				// percorrer matriz de tras para frente
				printf("%d ", );
			}
		}
	}*/
	
	for(i=0, j=2; i<3 && j>=0; i++, j--){
		diaginv[i] = diag[j];
	}
	
	printf("\nDP invertida: \n");
	for(i=0; i<3; i++){
		printf("%d ", diaginv[i]);
	}
	
}
