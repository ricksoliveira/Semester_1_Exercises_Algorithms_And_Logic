#include <stdio.h>

int main(){
	
	double mat1[10][10], mat2[10][10];
	int n, i, j;
	
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
	
	printf("subtracao das matrizes:\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%.2lf\t", mat1[i][j]-mat2[i][j]);
		}
		printf("\n");
	}	
}
