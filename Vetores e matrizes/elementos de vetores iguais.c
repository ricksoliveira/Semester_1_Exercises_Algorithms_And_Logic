#include <stdio.h>

int main(){
	
	int v1[5], v2[5], cont=0;
	int i, j;
	
		for(i=0; i<5; i++){
			scanf("%d", &v1[i]);
		}
		
		printf("\n");
		
		for(i=0; i<5; i++){
			scanf("%d", &v2[i]);
		}
		
		for(i=0; i<5; i++){
			for(j=0; j<5; j++){
				if(v1[i]==v2[j]){
					printf("\n%d esta nos dois vetores", v1[i]);
					cont++;
				}
			}
		}
		if(cont==0)
			printf("\nnenhum");
}
