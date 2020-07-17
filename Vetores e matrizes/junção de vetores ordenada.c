#include <stdio.h>

int main(){
	
	int v1[50], v2[50], v3[100], n1, n2, i, j, uniao=0, aux;
	
	scanf("%d", &n1);
	
	if(n1>50){
		n1=50;
		printf("vetor 1 = 50");
	}
	
	printf("\n");
	
	for(i=0; i<n1; i++){
		scanf("%d", &v1[i]);
		v3[i] = v1[i];
		uniao++;
	}

	printf("\n\n");
	scanf("%d", &n2);
	
	if(n2>50){
		n2=50;
		printf("vetor 2 = 50");
	}
	
	printf("\n");
	
	for(i=0; i<n2; i++){
		scanf("%d", &v2[i]);
		v3[uniao] = v2[i];
		uniao++;
	}
	
	printf("\nDesordenado");
	for(i=0; i<uniao; i++){
		printf("\n%d", v3[i]);
	}
	
	for(i=0; i<uniao; i++){
		for(j=i+1; j<uniao; j++){
			if(v3[i] > v3[j]){
				aux = v3[i];
				v3[i] = v3[j];
				v3[j] = aux;
			}
		}
	}
	
	printf("\n\nOrdenado");
	for(i=0; i<uniao; i++){
		printf("\n%d", v3[i]);
	}
}
