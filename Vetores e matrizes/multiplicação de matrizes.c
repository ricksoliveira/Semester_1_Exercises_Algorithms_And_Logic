#include <stdio.h>

int main(){
	
	double mat1[10][10], mat2[10][10], mat3[10][10], aux=0;
	int n, i, j, k;
	
	scanf("%d", &n);
	printf("\n");
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%lf", &mat1[i][j]);
		}
	}
	
	printf("\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%lf", &mat2[i][j]);
		}
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			for(k=0; k<n; k++){
				aux = aux + mat1[i][k] * mat2[k][j];
			}
			mat3[i][j] = aux;
			aux = 0;
		}
		aux = 0;
	}
	
	printf("\nMultiplicacao das matrizes:\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%.2lf \t", mat3[i][j]);
		}
		printf("\n");
	}
	
}
