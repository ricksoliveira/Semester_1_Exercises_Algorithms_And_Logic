#include <stdio.h>

int main(){
	
	int mat_mulher[2][2], mat_alimento[2][3], mat_resultado[2][3];
	int n, i, j, k;
	
	printf("Insira o numero de mulheres entre 30 e 45 anos que SAO sedentarias: ");
	scanf("%d", &mat_mulher[0][0]);
	
	printf("\nInsira o numero de mulheres entre 30 e 45 anos que NAO sao sedentarias: ");
	scanf("%d", &mat_mulher[1][0]);
	
	printf("\nInsira o numero de mulheres maiores de 45 anos que SAO sedentarias: ");
	scanf("%d", &mat_mulher[0][1]);
	
	printf("\nInsira o numero de mulheres maiores de 45 anos que NAO sao sedentarias: ");
	scanf("%d", &mat_mulher[1][1]);
	
	printf("\nInsira a porcao de Proteina (P) consumida por mulheres de 30 a 45 anos: ");
	scanf("%d", &mat_alimento[0][0]);
	
	printf("\nInsira a porcao de Gordura (G) consumida por mulheres de 30 a 45 anos: ");
	scanf("%d", &mat_alimento[0][1]);
	
	printf("\nInsira a porcao de Carboidrato (C) consumida por mulheres de 30 a 45 anos: ");
	scanf("%d", &mat_alimento[0][2]);
	
	printf("\nInsira a porcao de Proteina (P) consumida por mulheres com mais de 45 anos: ");
	scanf("%d", &mat_alimento[1][0]);
	
	printf("\nInsira a porcao de Gordura (G) consumida por mulheres com mais de 45 anos: ");
	scanf("%d", &mat_alimento[1][1]);
	
	printf("\nInsira a porcao de Carboidrato (C) consumida por mulheres com mais de 45 anos: ");
	scanf("%d", &mat_alimento[1][2]);
	
	/*for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d \t", mat_mulher[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");						// DEBUG PRINT DAS DUAS MATRIZES
	
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			printf("%d \t", mat_alimento[i][j]);
		}
		printf("\n");
	}*/
	
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			mat_resultado[i][j] = 0;
			for(k=0; k<2; k++){
				mat_resultado[i][j] = mat_resultado[i][j] + (mat_mulher[i][k] * mat_alimento[k][j]);
			}
		}
	}
	
	printf("\nMatriz Resultado:\n");
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			printf("%d \t", mat_resultado[i][j]);
		}
		printf("\n");
	}
	
	printf("\na)Quantas porcoes de Proteina (P) sao consumidas por mulheres sedentarias?");
	printf("Resposta: %d", mat_resultado[0][0]);
	
	printf("\n\nb)Quantas porcoes de Gordura (G) sao consumidas por mulheres nao sedentarias?");
	printf("Resposta: %d", mat_resultado[1][1]);
	
	printf("\n\nc)Quantas porcoes de Carboidrato(C) sao consumidas por mulheres nao sedentarias?");
	printf("Resposta: %d", mat_resultado[1][2]);
	
}
