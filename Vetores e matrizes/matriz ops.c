#include <stdio.h>

int main(){
	
	int mat1[10][10], mat2[10][10], mat3[10][10], n, i, j, k, op;
	
	printf("Qual a operacao de matrizes voce deseja fazer?");
	printf("\n\t1 - Soma\n\t2 - Multiplicacao\n\t3 - Subtracao\n\t4 - Transposta\n\t");
	scanf("%d", &op);
	
	printf("Digite a ordem das matrizes: \n");
	scanf("%d", &n);
	
	printf("\n\n");
	
	printf("Digite a matriz A: \n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d", &mat1[i][j]);
		}
	}
	
	printf("\n\n");
	
	printf("Digite a matriz B: \n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d", &mat2[i][j]);
		}
	}
	
	printf("\n\n");
	
	printf("----- Matriz A -----\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d \t", mat1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	printf("----- Matriz B -----\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d \t", mat2[i][j]);
		}
		printf("\n");
	}
	
	switch(op){
		
		case 1:
			printf("\n\n ----- SOMA -----\n\n");
			for(i=0; i<n; i++){
				for(j=0; j<n; j++){
					printf("%d \t", mat1[i][j] + mat2[i][j]);
				}
				printf("\n");
			}
			break;
			
		case 2:
			printf("\n\n ----- MULTIPLICACAO -----\n\n");
	
			for(i=0; i<n; i++){
				for(j=0; j<n; j++){
					mat3[i][j] = 0;
					for(k=0; k<n; k++){
						mat3[i][j] = mat3[i][j] + mat1[i][k] * mat2[k][j];
					}
				}
			}
			for(i=0; i<n; i++){
				for(j=0; j<n; j++){
					printf("%d \t", mat3[i][j]);
				}
				printf("\n");
			}
			break;
			
		case 3:
			printf("\n\n ----- SUBTRACAO -----\n\n");
			
			for(i=0; i<n; i++){
				for(j=0; j<n; j++){
					printf("%d \t", mat1[i][j] - mat2[i][j]);
				}
				printf("\n");
			}
			break;
				
		case 4:
			printf("\n\n ----- TRANSPOSTA A -----\n\n");
			
			for(i=0; i<n; i++){
				for(j=0; j<n; j++){
					printf("%d \t", mat1[j][i]);
				}
				printf("\n");
			}
			
			printf("\n\n ----- TRANSPOSTA B -----\n\n");
			
			for(i=0; i<n; i++){
				for(j=0; j<n; j++){
					printf("%d \t", mat2[j][i]);
				}
				printf("\n");
			}
			break;
	}
}
