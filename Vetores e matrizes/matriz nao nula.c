#include <stdio.h>

int main(){
	
	int mat1[10][10], i, j, cont=0;
	
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			scanf("%d", &mat1[i][j]);
		}
	}
	
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			if(mat1[i][j] != 0){
				cont++;
			}
		}
	}
	
	printf("\nmatriz tem %d posicoes nao nulas", cont);
	
}
