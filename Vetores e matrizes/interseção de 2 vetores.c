#include <stdio.h>

int main(){
	
	int v1[50], v2[50], v3[50], i, j, n1, n2, inter=0;
	
	scanf("%d", &n1);
	
	if(n1>50){
		n1=50;
		printf("vetor 1 = 50");
	}
	
	printf("\n");
	
	for(i=0; i<n1; i++){
		scanf("%d", &v1[i]);
	}
	
	printf("\n");
	scanf("%d", &n2);
	
	if(n2>50){
		n2=50;
		printf("vetor 2 = 50");
	}
	
	printf("\n");
	
	for(i=0; i<n2; i++){
		scanf("%d", &v2[i]);
	}
	
	for(i=0; i<n1; i++){
		for(j=0; j<n2; j++){
			if(v1[i]==v2[j]){
				v3[inter] = v1[i];
				inter++;
			}
		}
	}
	
	for(i=0; i<inter; i++){
		printf("\n%d", v3[i]);
	}
	
	if(inter==0) printf("\nnao ha intersecao");
}
