#include <stdio.h>

int main(){
	
	double mat[10][10];
	int n, i, j;
	
	scanf("%d", &n);
	printf("\n");
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%lf", &mat[i][j]);
		}
	}
	
	printf("\nTransposta:\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%.2lf \t", mat[j][i]);
		}
		printf("\n");
	}
	
}
