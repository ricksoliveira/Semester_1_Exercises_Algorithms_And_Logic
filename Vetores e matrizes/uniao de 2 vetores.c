#include <stdio.h>

int main(){
	
	int v1[50], v2[50], v3[100], n1, n2, i, j, uniao=0, bin=1, cont=0;
	
	scanf("%d", &n1);
	
	if(n1>50){
		n1=50;
		printf("vetor 1 = 50");
	}
	
	for(i=0; i<n1; i++){
		scanf("%d", &v1[i]);
		v3[uniao] = v1[i];
		uniao++;
	}
	
	printf("\n");
	scanf("%d", &n2);
	
	if(n2>50){
		n2=50;
		printf("vetor 2 = 50");
	}
	
	for(i=0; i<n2; i++){
		scanf("%d", &v2[i]);
	}
	
	for(i=0; i<n2; i++){
		for(j=0; j<n1; j++){
			if(v3[j] == v2[i]){
				bin = 0;
				break;
			}
		}
		if(bin == 1){
			v3[n1+cont] = v2[i];
			cont++;
		}
		bin = 1;
	}
	
	for(i=0; i<n1+cont; i++){
		printf("\n%d", v3[i]);
	}
}
